/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:28:30 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/07 17:52:01 by gclausse         ###   ########.fr       */
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
	std::cout << argv[1] << std::endl;
	Convert* a = new Convert(argv[1]);
	a->setType(argv[1]);
	void(Convert::*fctptr[4])(std::string const &str) = {
		&Convert::convChar, &Convert::convInt, &Convert::convFloat, &Convert::convDouble
	};
	if (a->getType() == INV)
		std::cout << "Unknown Type" << std::endl;
	else
		(a->*fctptr[a->getType()])(argv[1]);
}