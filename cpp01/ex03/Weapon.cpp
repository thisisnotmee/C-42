/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:39:11 by chbouthe          #+#    #+#             */
/*   Updated: 2024/02/23 14:15:15 by chbouthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{

}

Weapon::~Weapon( void )
{
	
}

std::string		const &Weapon::Get_Type() const
{
	return (this->_type);
}

void	Weapon::SetType(std::string new_type)
{
	this->_type = new_type;
}