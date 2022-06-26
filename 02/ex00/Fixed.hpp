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
		int	value_;
		static const int num_fractional_bit_ = 1;
};

#endif
