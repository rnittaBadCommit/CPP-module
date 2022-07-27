
#include <iostream>
#include <stack>
#include <list>
#include "MutantStack.hpp"

template <typename T>
void	print(MutantStack<T> src)
{
	std::cout << "size: " << src.size() << ", top: " << src.top() << std::endl;
}

int main(void)
{
	MutantStack<int> test;
	std::cout << "size: " << test.size() << std::endl;
//	print(test);
	for (int i = 1; i < 1 << 6; i *= 2)
	{
		test.push(i);
		print(test);
	}
}
