/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:40:06 by chbouthe          #+#    #+#             */
/*   Updated: 2024/02/20 17:10:57 by chbouthe         ###   ########.fr       */
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

void	Zombie::SetName( std::string name )
{
	this->_name = name;
}

Zombie	*Zombie::ZombieHorde(int N, std::string name)
{
	Zombie	*Zomb = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		Zomb[i].SetName(name);
	}
	return (Zomb);
}