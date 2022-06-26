#include "Fixed.hpp"


//constructors & destructors
Fixed::Fixed() : raw_bits_(0)
{

}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed::Fixed(const int value) : raw_bits_(value << fractional_bit_)
{

}

Fixed::Fixed(const float value) : raw_bits_(roundf(value * (1 << fractional_bit_)))
{

}

Fixed::~Fixed()
{

}


//overload operators
Fixed& Fixed::operator=(const Fixed &other)
{
	this->raw_bits_ = other.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed &other) const
{
	return (raw_bits_ > other.getRawBits());
}

bool	Fixed::operator<(const Fixed &other) const
{
	return (raw_bits_ < other.getRawBits());
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (raw_bits_ >= other.getRawBits());
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (raw_bits_ == other.getRawBits());
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (raw_bits_ != other.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &other) const
{
	Fixed	ret(*this);

	ret.setRawBits(raw_bits_ + other.getRawBits());
	return (ret);
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	Fixed	ret(*this);

	ret.setRawBits(raw_bits_ - other.getRawBits());
	return (ret);
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	Fixed	ret(*this);

	ret.setRawBits((int)((long int)raw_bits_ * other.getRawBits() / (1 << fractional_bit_)));
	return (ret);
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	Fixed	ret(*this);

	ret.setRawBits((int)((long int)raw_bits_ * (1 << fractional_bit_) / other.getRawBits()));
	return (ret);
}

Fixed	Fixed::operator++()
{
	raw_bits_++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	ret(*this);

	raw_bits_++;
	return (ret);
}

Fixed	Fixed::operator--()
{
	raw_bits_--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	ret(*this);

	raw_bits_--;
	return (ret);
}

//getter & setter
int	Fixed::getRawBits(void) const
{
	return (raw_bits_);
}

void	Fixed::setRawBits(int const raw)
{
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

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}




std::ostream	&operator<<(std::ostream &stdout, const Fixed &value)
{
	stdout << value.toFloat();
	return (stdout);
}
