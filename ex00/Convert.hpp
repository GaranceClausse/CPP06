/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:27:07 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/07 15:55:47 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <cctype>
#include <string>
#include <sstream>

class	Convert {
	public :
		Convert();
		Convert(std::string str);
		~Convert();
		Convert(const Convert& copy);
		Convert &operator=(Convert const &copy);

		
		const int &getType() const;
		void	setType(std::string str);

		const std::string &getContent() const;

		
		void	convInt(int input);
		void	convFloat(float input);
		void	convDouble(double input);
		void	convChar(char input);


	private :
		enum Type{CHAR, INT, FLOAT, DOUBLE, INV};
		int _type;
		std::string	_content;
};


std::ostream&	operator<<(std::ostream& stream, Convert const &copy);