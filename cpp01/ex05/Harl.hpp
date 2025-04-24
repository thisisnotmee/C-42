/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:48:42 by chbouthe          #+#    #+#             */
/*   Updated: 2024/02/23 17:32:31 by chbouthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <stdio.h>

class Harl{

	typedef void (Harl::*tab)(void);
	public :
		Harl();
		~Harl();
		void	complain(std::string level);
	private :
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};

#endif