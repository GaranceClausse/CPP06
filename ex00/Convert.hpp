/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:27:07 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/12 17:01:50 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <cctype>
#include <string>
#include <sstream>
#include <cstdlib>
#include <cstdlib>
#include <limits>
#include <iomanip>
#include <bits/stdc++.h>

class	Convert {
	public :
		Convert();
		~Convert();
		Convert(const Convert& copy);
		Convert &operator=(Convert const &copy);

		
		const int &getType() const;
		void	setType(std::string str);

		const int &getPrecision() const;
		void	setPrecision(int prec);

		void	convInt(std::string const &input);
		void	convFloat(std::string const &input);
		void	convDouble(std::string const &input);
		void	convChar(std::string const &input);

	private :
		int _type;
		int	_precision;
};

void	convert(std::string str);
enum Type{CHAR, INT, FLOAT, DOUBLE, INV};
std::ostream&	operator<<(std::ostream& stream, Convert const &copy);