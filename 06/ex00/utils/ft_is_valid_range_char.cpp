#include "ft_utils.hpp"

namespace ft
{
	bool	is_valid_range_char(const int i)
	{
		if (-128 <= i && i <= 127)
			return (true);
		else
			return (false);
	}

	bool	is_valid_range_char(const unsigned int ui)
	{
		if (ui <= 255)
			return (true);
		else
			return (false);
	}
}