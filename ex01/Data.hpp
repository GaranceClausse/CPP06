/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:25:13 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/12 19:16:18 by gclausse         ###   ########.fr       */
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
#include <stdint.h>

typedef struct	s_data {
	int	size;
	std::string	string_data[45];
		
}	Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);