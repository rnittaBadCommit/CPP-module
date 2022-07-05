#include "iter.hpp"

void	times_two(int &input)
{
	input *= 2;
}

template<typename T>
void	print(const T &c)
{
	std::cout << c << std::endl;
}

int main()
{
	int n[5] = {1, 2, 4, 8, 16};
	::iter(n, 5, times_two);
	::iter(n, 5, print);


	const int n2[5] = {1, 2, 3, 4, 5};
	::iter(n2, 5, print);

	std::string str[] = {"hello", "world"};
	::iter(str, 2, print);

	const std::string str2[] = {"abc", "zzz"};
	::iter(str2, 2, print);
}
