/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:26:42 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/14 17:33:17 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{
	//std::cout << "Convert default constructor called" << std::endl;
}

Convert::~Convert()
{
	//std::cout << "Convert destructor called" << std::endl;
}

const int	&Convert::getType() const
{
	return this->_type;
}

static void	impossible(std::string str)
{
	std::cout << "char : " << str << std::endl;
	std::cout << "int : impossible" << std::endl;
	std::cout << "float : impossible" << std::endl;
	std::cout << "double : impossible" << std::endl;
}

void	Convert::setType(std::string str)
{
	std::string::const_iterator it = str.begin();
	this->_type = INV;
	if (str.length() == 3 && str[0] == '\'' && str[2] == '\'')
	{
		this->_type = CHAR;
		str[0] = str[1];
		return ;
	}
	else
	{		
		int	coma = 0;
		if (str[0] == '+' || str[0] == '-')
			it++;
    	while (it != str.end() && (std::isdigit(*it) || *it == '.'))
		{
			if (*it == '.')
				coma++;
			++it;
		}
		if (it == str.end() && coma == 0)
			this->_type = INT;
		else if ((it == str.end() && coma == 1) || str.compare("-inf") == 0 || str.compare("+inf") == 0 || str.compare("nan") == 0)
			this->_type = DOUBLE;
		else if ((it == (str.end() - 1) && *(it++) == 'f' && coma == 1 ) || str.compare("-inff") == 0 || str.compare("+inff") == 0 || str.compare("nanf") == 0)
			this->_type = FLOAT;
	}
}

Convert::Convert(const Convert& copy)
{
	//std::cout << "Convert copy constructor called" << std::endl;
	operator=(copy);
}

Convert& Convert::operator=(Convert const& copy)
{
	//std::cout << "Convert operator = called" << std::endl;
	_type = copy.getType();
	return (*this);

}

void	Convert::convInt(std::string const &input)
{
	double db = strtod(input.c_str(), NULL);
	if ((db) < INT_MIN  || (db) > INT_MAX || db != db)
	{
		impossible("impossible");
		return ;
	}
	std::stringstream s_str( input );
        int d;
        s_str >> d;
	if (input[0] == '-')
		std::cout << "char : impossible" << std::endl;
	else if (d < 32 || d > 126)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(d) << "'" << std::endl;
	std::cout << "int : " <<  static_cast<int>(d)<< std::endl;
	std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(d)<< "f"  << std::endl;
	std::cout << "double : " << static_cast<double>(d) << std::endl;
}

void	Convert::convDouble(std::string const &input)
{
	double d = strtod(input.c_str(), NULL);

	if (input[0] == '-' || input.compare("-inf") == 0 || input.compare("+inf") == 0|| input.compare("nan") == 0)
		std::cout << "char : impossible" << std::endl;
	else if (d < 32 || d > 126)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(d) << "'" << std::endl;
	if ((d) < INT_MIN  || (d) > INT_MAX || d != d)
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " <<  static_cast<int>(d)<< std::endl;
	if (static_cast<float>(d) > FLT_MAX)
		std::cout << "float : impossible" << std::endl;
	else
		std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(d)<< "f"  << std::endl;
	std::cout << "double : " << static_cast<double>(d) << std::endl;
}

void	Convert::convChar(std::string const &inpt)
{
	std::string input = inpt.c_str();
	if (input[1] < 32 || input[1] > 126)
	{
		impossible("Non displayable");
		return ;
	}
	std::cout << "char : '" << static_cast<char>(input[1]) << "'" << std::endl;
	if (static_cast<int>(input[1]) < INT_MIN  || static_cast<int>(input[1]) > INT_MAX)
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " <<  static_cast<int>(input[1])<< std::endl;
	if (static_cast<float>(input[1]) < FLT_MIN  || static_cast<float>(input[1]) > FLT_MAX)
		std::cout << "float : impossible" << std::endl;
	else
		std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(input[1])<< "f"  << std::endl;
	std::cout << "double : " << static_cast<double>(input[1]) << std::endl;
	
}

void	Convert::convFloat(std::string const &input)
{
	double d = strtod(input.c_str(), NULL);
	
	if (input[0] == '-' || input.compare("-inff") == 0 || input.compare("+inff") == 0|| input.compare("nanf") == 0)
		std::cout << "char : impossible" << std::endl;
	else if (d < 32 || d > 126)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(d) << "'" << std::endl;
	if ((d) < INT_MIN  || (d) > INT_MAX || d != d)
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " <<  static_cast<int>(d)<< std::endl;
	std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(d)<< "f"  << std::endl;
	std::cout << "double : " << static_cast<double>(d) << std::endl;
	
}
