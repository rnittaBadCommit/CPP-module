
#include <iostream>
#include <stack>
#include <list>
#include "MutantStack.hpp"

int main(void)
{
	MutantStack<int> test;
	std::cout << "size: " << test.size() << std::endl;
//	print(test);
	for (int i = 1; i < 1 << 6; i *= 2)
	{
		test.push(i);
		std::cout << "size: " << test.size() << ", top: " << test.top() << std::endl;
	}

	{
		MutantStack<int>::iterator begin = test.begin();
		MutantStack<int>::iterator end = test.end();

		while (begin != end)
		{
			std::cout <<*begin << " ";
			begin++;
		}
		std::cout << std::endl;
	}

	std::cout << "========== copy constructor ==========" << std::endl;
	MutantStack<int> copy = test;
	{
		MutantStack<int>::iterator begin = copy.begin();
		MutantStack<int>::iterator end = copy.end();

		while (begin != end)
		{
			std::cout <<*begin << " ";
			begin++;
		}
		std::cout << std::endl;
	}

	std::cout << "========== copy assignment operator ==========" << std::endl;
	MutantStack<int> test2;
	test2.push(42);
	test2.push(43);
	test2.push(44);
	test2 = test;
		
	{
		MutantStack<int>::iterator begin = test2.begin();
		MutantStack<int>::iterator end = test2.end();

		while (begin != end)
		{
			std::cout <<*begin << " ";
			begin++;
		}
		std::cout << std::endl;
	}

	MutantStack<int> tmp;
	test = tmp;
	{
		MutantStack<int>::iterator begin = test.begin();
		MutantStack<int>::iterator end = test.end();

		while (begin != end)
		{
			std::cout <<*begin << " ";
			begin++;
		}
		std::cout << std::endl;
	}
#if TEST
	system("leaks -q stack");
#endif
}
