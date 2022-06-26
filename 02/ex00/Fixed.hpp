#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &other);
		virtual ~Fixed();
		Fixed	&operator=(const Fixed &other);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int	raw_bits_;
		static const int fractional_bit_ = 8;
};

#endif
