#include "ft_utils.hpp"

namespace ft
{
	int	stoi(const std::string str)
	{
		int	i;
		for (i = 0; str[i] == ' '; i++)
			;
		int	sign = 1;
		if (str[i] == '-')
			sign = -1;
		int	ret = 0;
		while ('0' <= str[i] && str[i] <= '9')
		{
			if (ret > (std::numeric_limits<int>::max() + (sign == -1) - str[i] - '0') / 10)
				throw Exception(OVER_FLOW);
			ret = ret * 10 + str[i] - '0';
			i++;
		}
		return (sign * ret);
	}
}
