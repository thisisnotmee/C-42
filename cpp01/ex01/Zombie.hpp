/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:38:37 by chbouthe          #+#    #+#             */
/*   Updated: 2024/02/20 17:09:42 by chbouthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie();
		Zombie( std::string name);
		~Zombie();
		Zombie	*ZombieHorde(int N, std::string name);
		void	announce( void );
		void	SetName( std::string name );
};


#endif