/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:47:14 by chbouthe          #+#    #+#             */
/*   Updated: 2024/02/23 18:57:03 by chbouthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main( void )
{
	Zombie	zombie1("MARC");
	Zombie	zombie2("JEAN");

	zombie1.announce();
	zombie2.announce();
	randomChump("randomChump");


	Zombie	*heap = NULL;

	heap = heap->newZombie("HEAP");
	heap->announce();
	delete(heap);
	return 0;
}