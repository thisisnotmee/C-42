#include "Fixed.hpp"

Fixed::Fixed( void ) : _RawBits(0)
{
	std::cout << "Constructeur par defaut valeur a 0" << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructeur" << std::endl;
}

Fixed::Fixed(Fixed const &f)
{
	std::cout << "Constructeur de copie" << std::endl;
	*this = f;
}

Fixed	&Fixed::operator=(const Fixed &f2)
{
	std::cout << "Constructeur Operateur" << std::endl;
	this->setRawBits(f2.getRawBits());
	return (*this);
}

int		Fixed::getRawBits( void ) const
{
	return (_RawBits);
}

void	Fixed::setRawBits( int const raw )
{
	this->_RawBits = raw;
}

// EX 01

Fixed::Fixed( const int nbr )
{
	std::cout << "Constructeur int" << std::endl;
	this->_RawBits = (nbr << Fixed::_bits);
}

Fixed::Fixed( const float floating )
{
	std::cout << "Constructeur float" << std::endl;
	this->_RawBits = roundf(floating * (1 << Fixed::_bits));
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->_RawBits / (float)(1 << Fixed::_bits));
}

int		Fixed::toInt( void ) const
{
	return (this->_RawBits >> Fixed::_bits);
}

std::ostream	&operator<<(std::ostream &stream, Fixed const &f)
{
	stream << f.toFloat();
	return (stream);
}