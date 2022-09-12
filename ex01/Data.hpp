/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:25:13 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/12 16:31:38 by gclausse         ###   ########.fr       */
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

class	Data {
	public :
		Data();
		~Data();
		Data(const Data& copy);
		Data &operator=(Data const &copy);

		

	private :
};

uintptr_t serialize(Data* ptr);