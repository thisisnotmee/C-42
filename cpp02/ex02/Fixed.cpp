#include "Fixed.hpp"

// EX00

Fixed::Fixed( void ) : _nbr(0)
{
	std::cout << " Constructor called, value set to '0' " << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout << " Destructor called " << std::endl;
}

Fixed::Fixed(Fixed const &f)
{
	std::cout << " Fixed f called " << std::endl;
	*this = f;
}

float	Fixed::toFloat(void) const
{
	return (float)this->_nbr / (1 << Fixed::_bits);
}

int		Fixed::toInt(void) const
{
	return this->_nbr >> Fixed::_bits;
}

// SURCHARGES D'OPERATEURS 

Fixed::Fixed(float const n): _nbr(roundf(n * (1 << Fixed::_bits)))
{

}

Fixed::Fixed(int const n): _nbr(n << Fixed::_bits)
{

}

Fixed	&Fixed::operator=(Fixed const &f)
{
	if (this != &f)
		this->_nbr = f.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(Fixed const &f)
{
	return Fixed(toFloat() + f.toFloat());
}

Fixed	Fixed::operator-(Fixed const &f)
{
	return Fixed(toFloat() - f.toFloat());
}

Fixed	Fixed::operator*(Fixed const &f)
{
	return Fixed(toFloat() * f.toFloat());
}

Fixed	Fixed::operator/(Fixed const &f)
{
	return Fixed(toFloat() / f.toFloat());
}

Fixed	&Fixed::operator++(void)
{
	this->_nbr++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);

	++*this;
	return tmp;
}

Fixed	&Fixed::operator--(void)
{
	this->_nbr--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);

	--*this;
	return tmp;
}

int		Fixed::getRawBits(void) const
{
	return this->_nbr;
}

void	Fixed::setRawBits(int const raw)
{
	this->_nbr = raw;
}

std::ostream &operator<<(std::ostream &o, Fixed const &f)
{
	o << f.toFloat();
	return o;
}

bool	operator>(Fixed const &first, Fixed const & f)
{
	return first.getRawBits() > f.getRawBits();
}
bool	operator<(Fixed const &first, Fixed const &f)
{
	return first.getRawBits() < f.getRawBits();
}
bool	operator>=(Fixed const &first, Fixed const &f)
{
	return first.getRawBits() >= f.getRawBits();
}
bool	operator<=(Fixed const &first, Fixed const &f)
{
	return first.getRawBits() <= f.getRawBits();
}
bool	operator==(Fixed const &first, Fixed const &f)
{
	return first.getRawBits() == f.getRawBits();
}
bool	operator!=(Fixed const &first, Fixed const &f)
{
	return first.getRawBits() != f.getRawBits();
}

Fixed	&Fixed::min(Fixed &first, Fixed &f)
{
	return (first < f) ? first : f;
}

Fixed const &Fixed::min(Fixed const & first, Fixed const & f)
{
	return (first < f) ? first : f;
}

Fixed	&Fixed::max(Fixed & first, Fixed & f)
{
	return (first > f) ? first : f;
}

Fixed const &Fixed::max(Fixed const & first, Fixed const & f)
{
	return (first > f) ? first : f;
}
