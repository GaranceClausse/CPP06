/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:02:04 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/14 16:21:44 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	Base *randomBase;
	int randNum = rand() % 3;
	switch (randNum)
	{
		case 0 : 
		randomBase = new A();
		break ;
		case 1 :
		randomBase = new B();
		break;
		case 2 : 
		randomBase = new C();
		break;
		default :
		randomBase = NULL;
	}
	return (randomBase);
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "type A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "type B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "type C" << std::endl;
	else
		std::cout << "unknown" << std::endl;
	
}

void identify(Base& p)
{
	A a;
	B b;
	C c;

	try
	{
		a = (dynamic_cast<A &>(p));
		std::cout << "type A" << std::endl;		
	}
	catch(const std::exception& e)
	{
		try
		{
			b = (dynamic_cast<B &>(p));
			std::cout <<"type B" << std::endl;		
		}
		catch(const std::exception& e)
		{
			try
			{
				c = (dynamic_cast<C &>(p));
				std::cout << "type C" << std::endl;		
			}
			catch(const std::exception& e)
			{
				std::cout << "unknown" << std::endl;
			}
		}
	}
}

int main()
{
	srand( time(NULL) );
	Base *ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
}