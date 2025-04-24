/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:39:54 by chbouthe          #+#    #+#             */
/*   Updated: 2024/04/19 19:12:19 by chbouthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public :
		Fixed();
		~Fixed();
		Fixed( const Fixed &f);
		Fixed	&operator=(const Fixed &f2);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		Fixed( const int nbr );
		Fixed( const float floating);

		float	toFloat( void ) const;
		int		toInt( void ) const;

	private :
		int	_RawBits;
		static const int	_bits = 8;

};

std::ostream	&operator<<(std::ostream &stream, Fixed const &f);

#endif