#include "ft_utils.hpp"

namespace ft
{
	bool	is_int(const std::string str)
	{
		int	i = 0;
		if (str[0] == '+' || str[0] == '-')
			i++;
		for (; i < (int)str.length(); i++)
		{
			if (str[i] < '0' || '9' < str[i])
				return (false);
		}
		return (true);
	}
}
