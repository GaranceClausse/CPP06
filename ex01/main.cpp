/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:11:24 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/12 19:23:31 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
	Data *example = new Data;
	uintptr_t intptr = serialize(example);
	Data *after;
	
	std::cout << intptr << std::endl;
	after = deserialize(intptr);
	std::cout << intptr << std::endl;
	
}