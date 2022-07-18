#include "easyfind.hpp"

#include <vector>
#include <array>
#include <iostream>

int main()
{
	int tmp[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 9};
	std::vector<int> test(tmp, std::end(tmp));

	try
	{
		std::cout << *easyfind<std::vector<int> >(test, 1) << std::endl;
		std::cout << *std::next(easyfind<std::vector<int> >(test, 1)) << std::endl;
		std::cout << *easyfind<std::vector<int> >(test, 9) << std::endl;
		std::cout << *easyfind<std::vector<int> >(test, 0) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
