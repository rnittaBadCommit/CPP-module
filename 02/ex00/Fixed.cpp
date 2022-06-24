#include "Fixed.hpp"

Fixed::Fixed() : value_(0)
{

}

Fixed::Fixed(const Fixed &other) : value_(0)
{
	*this = other;
}

Fixed::~Fixed()
{

}

Fixed& Fixed::operator=(const Fixed &other)
{
	this->value_ = other.value_;
	return (*this);
}

int	Fixed::getRawBits(void) const
{

}

void	Fixed::setRawBits(int const raw)
{

}
