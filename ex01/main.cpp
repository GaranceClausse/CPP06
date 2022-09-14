/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:11:24 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/14 16:23:36 by gclausse         ###   ########.fr       */
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
	Data *deser;
	deser = reinterpret_cast<Data *>(raw);
	return (deser);
}

int main()
{
	Data *example = new Data;
	example->size = 45;
	for (int i = 0 ; i < 45 ; i++)
		example->string_data[i] = "42";
	uintptr_t intptr = serialize(example);
	Data *after;
	
	std::cout << "The pointer address after beeing serialize : " << intptr << std::endl;
	after = deserialize(intptr);
	std::cout <<"The pointer address after beeing deserialize : " << intptr << std::endl;

	std::cout << after->size << std::endl;
	for (int i = 0 ; i < 45 ; i++)
		std::cout << after->string_data[i] << ", ";
	std::cout << std::endl;
	
	delete example;
	
}