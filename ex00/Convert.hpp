/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:27:07 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/05 16:55:31 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>

class	Convert {
	public :
		Convert(std::string str);
		~Convert();
		Convert(const Convert& copy);
		Convert &operator=(Convert const &copy);

		
		const int &Convert::getType() const;
		

	private :
		enum Type{CHAR, INT, FLOAT, DOUBLE, INV};
		int _type;
};