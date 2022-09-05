/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:26:42 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/05 16:55:22 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(std::string str)
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