/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:38:30 by chbouthe          #+#    #+#             */
/*   Updated: 2024/02/23 14:16:58 by chbouthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon{
	public :
		Weapon(std::string type);
		~Weapon();
		std::string		const &Get_Type() const;
		void	SetType(std::string new_type);		
	private :
		std::string		_type;
};

#endif