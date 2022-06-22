#include "ft_utils.hpp"

int	ft_stoi(std::string str)
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
		if (ret > (INT_MAX + (sign == -1) - str[i] - '0') / 10)
			return (INT_MAX + (sign == -1));
		ret = ret * 10 + str[i] - '0';
		i++;
	}
	return (sign * ret);
}
