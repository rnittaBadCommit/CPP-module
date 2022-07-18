#include "easyfind.hpp"

#include <vector>
#include <array>
#include <iostream>

int main()
{
	std::vector<int> test{1, 2, 3, 4, 5, 6, 7, 8, 9, 1};

	std::vector<int>::iterator itr = easyfind<std::vector<int>>(test, 1);
	std::cout << *itr << std::endl;
	
}
