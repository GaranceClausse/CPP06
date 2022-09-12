/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:25:03 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/12 19:11:13 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	uintptr_t serie = reinterpret_cast<uintptr_t>(ptr);
	return (serie);
}

Data* deserialize(uintptr_t raw)
{
	Data *deser = new Data;
	deser = reinterpret_cast<Data *>(raw);
	return (deser);
}