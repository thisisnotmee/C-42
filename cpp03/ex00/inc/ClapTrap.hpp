/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:14:26 by chbouthe          #+#    #+#             */
/*   Updated: 2024/03/07 16:18:34 by chbouthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
	private :
		std::string	_name;
		int			_HitPoints;
		int			_EnergyPoints;
		int			_AttackDammage;
	public :
		ClapTrap( std::string );
		~ClapTrap( void );
		void attack(const std::string cible);
		void takeDamage(int val);
		void beRepaired(int val);
		ClapTrap &operator=(ClapTrap const &Copy);
		void infos( void ) const;
};

#endif