/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:26:42 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/07 18:48:25 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{
	std::cout << "Convert default constructor called" << std::endl;
}

Convert::~Convert()
{
	std::cout << "Convert destructor called" << std::endl;
}

const int	&Convert::getType() const
{
	return this->_type;
}

void	Convert::setType(std::string str)
{
	std::string::const_iterator it = str.begin();
	this->_type = INV;
	std::cout << str  << std::endl;
	if (/*str.length() == 3 && */*it == '\'' && *(it + 2) == '\'')
	{
		this->_type = CHAR;
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
	std::cout << "Convert copy constructor called" << std::endl;
	operator=(copy);
}

Convert& Convert::operator=(Convert const& copy)
{
	std::cout << "Convert operator = called" << std::endl;
	_type = copy.getType();
	return (*this);

}

void	Convert::convInt(std::string const &input)
{
	double d = strtod(input.c_str(), NULL);

	if (input[0] == '-')
		std::cout << "char : impossible" << std::endl;
	else if (d < 32 || d > 126)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(d) << "'" << std::endl;
	std::cout << "int : " <<  static_cast<int>(d)<< std::endl;
	std::cout << "float : " << static_cast<float>(d)<< "f"  << std::endl;
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
	std::cout << "int : " <<  static_cast<int>(d)<< std::endl;
	std::cout << "float : " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double : " << static_cast<double>(d) << std::endl;
}

void	Convert::convChar(std::string const &input)
{
	double d = strtod(input.c_str(), NULL);
	
	if (d < 32 || d > 126)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(d) << "'" << std::endl;
	std::cout << "int : " <<  static_cast<int>(d)<< std::endl;
	std::cout << "float : " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double : " << static_cast<double>(d) << std::endl;
	
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
	std::cout << "int : " <<  static_cast<int>(d)<< std::endl;
	std::cout << "float : " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double : " << static_cast<double>(d) << std::endl;
	
}
