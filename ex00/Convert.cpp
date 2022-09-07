/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:26:42 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/07 15:05:19 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{
	std::cout << "Convert default constructor called" << std::endl;
}

Convert::Convert(std::string str) : _content(str)
{
	std::cout << "Convert constructor called" << std::endl;
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
	std::cout << "str0 == " << *it << std::endl;
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

std::ostream&	operator<<(std::ostream& stream, Convert const &copy)
{
	int t = copy.getType();
	
	if (t == 0)
		stream << "Char" << std::endl;
	else if (t == 1)
		stream << "int" << std::endl;
	else if (t == 2)
		stream << "float" << std::endl;
	else if (t == 3)
		stream << "double" << std::endl;
	else if (t == 4)
		stream << "invalid" << std::endl;
	return (stream);
}