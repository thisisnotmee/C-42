/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:39:04 by chbouthe          #+#    #+#             */
/*   Updated: 2024/02/23 14:29:18 by chbouthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = NULL;
}
HumanB::~HumanB()
{

}
void	HumanB::SetWeapon(Weapon &new_weapon)
{
	this->_weapon = &new_weapon;
}

void	HumanB::attack( void ) const
{
	if (this->_weapon)
	{
		std::cout << this->_name <<  " attack with his " << (*(this->_weapon)).Get_Type() << std::endl;
	}
	else
	{
		std::cout << this->_name << " tries to attack without weapon " << std::endl;
	}
}