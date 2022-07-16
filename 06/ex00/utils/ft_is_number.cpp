#include "ft_utils.hpp"

namespace ft
{
	bool	is_number(const std::string str)
	{
		size_t i = 0;
		if (str.length())
			if (str[0] == '+' || str[0] == '-')
				i++;
		bool	is_first_digit = 1;
		bool	is_first_dot = 1;
		for (; i < str.length(); i++)
		{
			if (str[i] == '.')
			{
				if (is_first_digit || !is_first_dot)
					return (false);
				else
				{
					is_first_dot = 0;
					continue;
				}
			}
			if (i == str.length() - 1 && str[i] == 'f' && is_first_digit == 0 && str[i - 1] != '.')
				return (true);
			if ((str[i] < '0' || '9' < str[i]))
				return (false);
			is_first_digit = 0;
		}
		if (str[i - 1] == '.' || is_first_digit)
			return (false);
		else
			return (true);
	}
}
