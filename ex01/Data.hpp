/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:25:13 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/12 18:56:10 by gclausse         ###   ########.fr       */
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

typedef struct	s_data {
	int	size;
	float	float_data;
	double 	double_data;
	char	char_data;
	std::string	string_data;
		
}	Data;

uintptr_t serialize(Data* ptr);