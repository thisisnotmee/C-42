/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:38:21 by chbouthe          #+#    #+#             */
/*   Updated: 2024/02/23 14:08:51 by chbouthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include "HumanA.hpp"

class HumanB{
	public :
		HumanB(std::string name);
		~HumanB();
		void	attack(void) const;
		void 	SetWeapon(Weapon &new_wepon);
		
	private :
	
		std::string _name;
		Weapon	*_weapon;
		
};

#endif
