/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbouthe <chbouthe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:30:00 by chbouthe          #+#    #+#             */
/*   Updated: 2024/04/19 19:11:22 by chbouthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _RawBits(0)
{
	std::cout << "Constructor called, value set to '0' " << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called " << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Fixed copy called " << std::endl;
	this->setRawBits(f.getRawBits());
}

Fixed	&Fixed::operator=(const Fixed &f2)
{
	std::cout << "Constructeur copy" << std::endl;
	this->setRawBits(f2.getRawBits());
	return(*this);
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits" << std::endl;
	return (_RawBits);
}

void	Fixed::setRawBits( int const raw )
{
	this->_RawBits = raw;
}