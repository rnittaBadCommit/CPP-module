#include "ft_utils.hpp"

namespace ft
{
	bool	is_float(const std::string str)
	{
		int	i = 0;
		if (str[0] == '+' || str[0] == '-')
			i++;
		for (; '0' <= str[i] && str[i] <= '9'; i++)
			;
		if (str[i] == '.')
			i++;
		for (; '0' <= str[i] && str[i] <= '9'; i++)
			;
		if (str[i] == 'f')
			return (true);
		else
			return (false);
	}
}
