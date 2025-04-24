/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:01:11 by chbouthe          #+#    #+#             */
/*   Updated: 2024/02/28 17:12:17 by chbouthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public :
		Fixed( void );
		~Fixed( void );
		Fixed(Fixed const &Copy);
		Fixed	&operator=(const Fixed &copy);
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private :
		int					_RawBits;
		static const int	_bits = 8;
		
};

#endif
