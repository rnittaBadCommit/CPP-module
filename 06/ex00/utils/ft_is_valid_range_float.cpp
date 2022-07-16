#include "ft_utils.hpp"

namespace ft
{
	bool	is_valid_range_float(const double d)
	{
		if (std::numeric_limits<float>::lowest() <= d && d <= std::numeric_limits<float>::max())
			return (true);
		else
			return (false);
	}
}
