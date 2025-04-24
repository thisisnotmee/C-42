/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:14:16 by chbouthe          #+#    #+#             */
/*   Updated: 2024/03/06 15:47:00 by chbouthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main( void )
{
	ClapTrap	first("Gerald");

	ClapTrap	second("Lucien");

	first.attack("Lucien");
	second.takeDamage(1);

	first.infos();
	second.infos();

	return 0;
}