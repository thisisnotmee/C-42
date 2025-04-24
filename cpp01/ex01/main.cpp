/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:38:13 by chbouthe          #+#    #+#             */
/*   Updated: 2024/02/23 18:58:45 by chbouthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *Z = NULL;

	Z = Z->ZombieHorde(4, "Depardieu");

	Z[3].announce();

	delete []Z;

	return 0;
}