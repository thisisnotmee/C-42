/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:14:36 by chbouthe          #+#    #+#             */
/*   Updated: 2024/03/07 16:18:11 by chbouthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name), _HitPoints(10), _EnergyPoints(10), _AttackDammage(1)
{
	std::cout << "--|> " << name << " \033[42mdefault construtor\033[0m" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "--|> " << this->_name << " \033[41mdestrutor\033[0m" << std::endl;
}

void ClapTrap::attack(const std::string cible)
{
	std::cout << "--|> " << this->_name << " attaque " << cible << ", cause " << this->_AttackDammage << " dégâts" << std::endl;
}

void ClapTrap::takeDamage(int attack)
{
	this->_HitPoints -= attack;
	std::cout << "--|> " << this->_name << " à pris " << attack << " points de dégâts" << std::endl;
}

void ClapTrap::beRepaired(int val)
{
	std::cout << "--|> " << this->_name << " être réparé " << val << " points de dégâts!" << std::endl;
}

void ClapTrap::infos( void ) const
{
	std::cout << "" << std::endl;
	std::cout << "VIE : " << _HitPoints << std::endl;
	std::cout << "ENERGY : " << _EnergyPoints << std::endl;
	std::cout << "NOM : " << _name << std::endl;
	std::cout << "" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &Copy)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
	if (this != &Copy)
	{
		this->_name = Copy._name;
		this->_HitPoints = Copy._HitPoints;
		this->_EnergyPoints = Copy._EnergyPoints;
		this->_AttackDammage = Copy._AttackDammage;
	}
	return (*this);
}