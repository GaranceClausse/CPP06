/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:27:07 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/07 17:54:44 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <cctype>
#include <string>
#include <sstream>
#include <cstdlib>

class	Convert {
	public :
		Convert();
		~Convert();
		Convert(const Convert& copy);
		Convert &operator=(Convert const &copy);

		
		const int &getType() const;
		void	setType(std::string str);

		void	convInt(std::string const &input);
		void	convFloat(std::string const &input);
		void	convDouble(std::string const &input);
		void	convChar(std::string const &input);

	private :
		int _type;
};

void	convert(std::string str);
enum Type{CHAR, INT, FLOAT, DOUBLE, INV};
std::ostream&	operator<<(std::ostream& stream, Convert const &copy);