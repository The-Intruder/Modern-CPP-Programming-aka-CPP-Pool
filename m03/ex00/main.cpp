/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaimi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:09:25 by mnaimi            #+#    #+#             */
/*   Updated: 2022/10/07 20:08:34 by mnaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int	main( void )
{
	ClapTrap	first;
	ClapTrap	second("Monster");
	ClapTrap	third(second);
	ClapTrap	forth;
	forth = second;

	std::cout << "first" << std::endl;
	std::cout << first.getName() << " " << first.getHitPoints() << " ";
	std::cout << first.getAttackDamage() << " " << first.getEnergyPoints();
	std::cout << std::endl;

	std::cout << "second" << std::endl;
	std::cout << second.getName() << " " << second.getHitPoints() << " ";
	std::cout << second.getAttackDamage() << " " << second.getEnergyPoints();
	std::cout << std::endl;

	std::cout << "third" << std::endl;
	std::cout << third.getName() << " " << third.getHitPoints() << " ";
	std::cout << third.getAttackDamage() << " " << third.getEnergyPoints();
	std::cout << std::endl;

	std::cout << "forth" << std::endl;
	std::cout << forth.getName() << " " << forth.getHitPoints() << " ";
	std::cout << forth.getAttackDamage() << " " << forth.getEnergyPoints();
	std::cout << std::endl;

	return (0);
}
