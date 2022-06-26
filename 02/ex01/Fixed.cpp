#include "Fixed.hpp"

Fixed::Fixed() : raw_bits_(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int value) : raw_bits_(value << fractional_bit_)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : raw_bits_(roundf(value * (1 << fractional_bit_)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->raw_bits_ = other.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (raw_bits_);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	raw_bits_ = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)raw_bits_ / (1 << fractional_bit_));
}

int		Fixed::toInt(void) const
{
	return (raw_bits_ >> fractional_bit_);
}

std::ostream	&operator<<(std::ostream &stdout, const Fixed &value)
{
	stdout << value.toFloat();
	return (stdout);
}
