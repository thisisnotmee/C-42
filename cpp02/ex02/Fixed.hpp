/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:57:23 by chbouthe          #+#    #+#             */
/*   Updated: 2024/04/19 19:31:44 by chbouthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public :
			Fixed(void);
			Fixed(Fixed const &f);
			~Fixed(void);
			
			Fixed	&operator=(Fixed const &f);
			Fixed	operator+(Fixed const &f);
			Fixed	operator-(Fixed const &f);
			Fixed	operator*(Fixed const &f);
			Fixed	operator/(Fixed const &f);
			Fixed	&operator++(void);
			Fixed	operator++(int);
			Fixed	&operator--(void);
			Fixed	operator--(int);
			int 	getRawBits(void) const;
			void 	setRawBits(int const raw);
			Fixed(int const value);
			Fixed(float const value);
			float 				toFloat(void) const;
			int 				toInt(void) const;
			static Fixed 		&min(Fixed &first, Fixed &f);
			static Fixed 		&max(Fixed &first, Fixed &f);
			static Fixed const 	&max(Fixed const &first, Fixed const &f);
			static Fixed const 	&min(Fixed const &first, Fixed const &f);

	private :
		static const int		_bits = 8;
		int		_nbr;
};

std::ostream &operator<<(std::ostream &o, Fixed const &f);

bool	operator>(Fixed const & first, Fixed const & f);
bool	operator<(Fixed const & first, Fixed const & f);
bool	operator>=(Fixed const & first, Fixed const & f);
bool	operator<=(Fixed const & first, Fixed const & f);
bool	operator==(Fixed const & first, Fixed const & f);
bool	operator!=(Fixed const & first, Fixed const & f);

#endif