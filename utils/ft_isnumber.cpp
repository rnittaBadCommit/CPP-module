#include "ft_utils.hpp"

bool	is_only_number(const std::string str)
{
	for (int i = 0; i < (int)str.length(); i++)
	{
		if (str[i] < '0' || '9' < str[i])
			return (false);
	}
	return (true);
}
