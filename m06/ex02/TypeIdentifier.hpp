/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeIdentifier.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaimi <mnaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 22:42:34 by mnaimi            #+#    #+#             */
/*   Updated: 2022/11/22 22:42:35 by mnaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef TYPE_IDENTIFIER_HPP_
#define TYPE_IDENTIFIER_HPP_

/* ************************************************************************** */
/* ****************************   INCLUDES   ******************************** */
/* ************************************************************************** */

#include <iostream>
#include <sys/time.h>

/* ************************************************************************** */
/* *****************************   CLASSES   ******************************** */
/* ************************************************************************** */

class Base
{
	public:
		virtual ~Base();
};

class A : public Base
{
	public:
		~A();
};

class B : public Base
{
	public:
		~B();
};

class C : public Base
{
	public:
		~C();
};

/* ************************************************************************** */
/* ****************************   PROTOTYPES   ****************************** */
/* ************************************************************************** */

Base	*generate(void);
void	identify(Base *p);
void	identify(Base& p);

#endif