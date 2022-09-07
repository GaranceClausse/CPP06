/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:28:30 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/07 15:57:16 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Protoype : ./convert [literal]" << std::endl;
		return 1;
	}
	int	i;

	std::stringstream degree(argv[1]);
	degree >> i;
	Convert* a = new Convert(argv[1]);
	a->setType(argv[1]);
	std::cout << *a;
	a->convInt(i);
}