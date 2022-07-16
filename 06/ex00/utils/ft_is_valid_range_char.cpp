#include "ft_utils.hpp"

namespace ft
{
	bool	is_valid_range_char(const int i)
	{
		if (std::numeric_limits<char>::min() <= i && i <= std::numeric_limits<char>::max())
			return (true);
		else
			return (false);
	}

	bool	is_valid_range_char(const unsigned int ui)
	{
		if (ui <= std::numeric_limits<unsigned char>::max())
			return (true);
		else
			return (false);
	}
}
