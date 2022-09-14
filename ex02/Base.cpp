/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:34:51 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/14 12:03:48 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base::~Base()
{
	std::cout << "Base destructor called" << std::endl;
}


Base * generate(void)
{
	Base *randomBase;
	srand( time(NULL) );
	int randNum = rand() % 2;
	switch (randNum)
	{
		case 0 : 
		randomBase = new A;
		case 1 :
		randomBase = new B;
		case 2 : 
		randomBase = new C;
	}
	return (randomBase);
}

void identify(Base* p)
{
	
}

void identify(Base& p)
{
	
}