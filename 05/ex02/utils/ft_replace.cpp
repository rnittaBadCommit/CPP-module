#include "ft_utils.hpp"

namespace ft
{
	void	replace(std::string &content, std::string s1, std::string s2)
	{
		for (size_t i = content.find(s1); i != std::string::npos; i = content.find(s1, i))
		{
			content.erase(i, s1.length());
			content.insert(i, s2);
		}
	}
}
