/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclausse <gclausse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:33:23 by gclausse          #+#    #+#             */
/*   Updated: 2022/09/14 11:44:07 by gclausse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <cstdlib>

class Base
{
	public:
		virtual ~Base();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);