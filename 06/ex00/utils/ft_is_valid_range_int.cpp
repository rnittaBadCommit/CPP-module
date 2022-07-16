#include "ft_utils.hpp"

namespace ft
{
	bool	is_valid_range_int(const long int l)
	{
		if (INT_MIN <= l && l <= INT_MAX)
			return (true);
		else
			return (false);
	}

	bool	is_valid_range_int(const unsigned long int l)
	{
		if (l <= UINT_MAX)
			return (true);
		else
			return (false);
	}
}