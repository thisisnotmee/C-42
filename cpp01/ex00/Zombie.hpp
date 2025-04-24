/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:57:21 by chbouthe          #+#    #+#             */
/*   Updated: 2024/02/20 15:22:41 by chbouthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

void	randomChump( std::string name );

class Zombie
{
	private :
		std::string		_name;
	public :
		Zombie();
		Zombie(std::string name);
		~Zombie();
		Zombie	*newZombie( std::string name );
		void	announce( void );
};


#endif