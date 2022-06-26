#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &other);
		Fixed(const int value);
		Fixed(const float value);
		virtual ~Fixed();
		Fixed	&operator=(const Fixed &other);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int	raw_bits_;
		static const int fractional_bit_ = 8;
};

std::ostream	&operator<<(std::ostream &stdout, const Fixed &value);

#endif
