/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:34:05 by chbouthe          #+#    #+#             */
/*   Updated: 2024/02/23 18:57:08 by chbouthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Appel du constructeur par default" << std::endl;
	this->_name = "default";
}

Zombie::Zombie( std::string name ) : _name(name)
{
	std::cout << this->_name << " Appel du constructeur" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " Appel du destructeur " << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	randomChump( std::string name )
{
	Zombie	*New = NULL;

	New = New->newZombie(name);
	New->announce();
}

Zombie*	Zombie::newZombie( std::string name )
{
	Zombie *zion = new Zombie;
	zion->_name = name;
	return (zion);
}
