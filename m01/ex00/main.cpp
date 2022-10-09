/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaimi <mnaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 06:53:32 by mnaimi            #+#    #+#             */
/*   Updated: 2022/08/03 18:24:54 by mnaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* ************************************************************************** */
/* ********************************  MAIN  ********************************** */
/* ************************************************************************** */

int	main( void )
{
	Zombie *zombie_ptr;

	zombie_ptr = newZombie("Alex");
	zombie_ptr->announce();
	randomChump("Steve");
	delete zombie_ptr;
	system("leaks Brain");
	return (0);
}
