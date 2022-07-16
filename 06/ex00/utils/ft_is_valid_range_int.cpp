#include "ft_utils.hpp"

namespace ft
{
	bool	is_valid_range_int(const long int l)
	{
		if (std::numeric_limits<int>::min() <= l && l <= std::numeric_limits<int>::max())
			return (true);
		else
			return (false);
	}

	bool	is_valid_range_int(const unsigned long int l)
	{
		if (l <= std::numeric_limits<unsigned int>::max())
			return (true);
		else
			return (false);
	}
}
