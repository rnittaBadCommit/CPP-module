#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template <typename T>
typename T::iterator	easyfind(T container, int to_find)
{
	typename T::iterator ret = std::find(container.begin(), container.end(), to_find);
	if (ret == container.end())
		throw std::exception();
	else
		return (ret);
}

#endif
