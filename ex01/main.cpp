/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:11:24 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/14 15:40:57 by gclausse         ###   ########.fr       */
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

int main()
{
	Data *example = new Data;
	uintptr_t intptr = serialize(example);
	Data *after;
	
	std::cout << "The pointer address after beeing serialize : " << intptr << std::endl;
	after = deserialize(intptr);
	std::cout <<"The pointer address after beeing deserialize : " << intptr << std::endl;
	
}