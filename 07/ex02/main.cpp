#include "Array.hpp"

int main()
{
	Array<int>	array(10);

	std::cout << "array" << std::endl;
	array[0] = 1;
	array[1] = 2;
	array[2] = 4;
	array[3] = 8;
	array[4] = 16;
	array[5] = 32;
	array[6] = 64;
	array[7] = 128;
	array[8] = 256;
	array[9] = 612;

	for ( size_t i = 0; i < 10; i++ )
		std::cout << i + 1 << " : " << array[i] <<std::endl;

	Array<int>	array2( array );
	array2[0] = 42;
	std::cout << "array" << std::endl;
	for ( size_t i = 0; i < 10; i++ )
		std::cout << array[i] << std::endl;
	std::cout << "array2" << std::endl;
	for ( size_t i = 0; i < 10; i++ )
		std::cout << array2[i] << std::endl;

	try
	{
		array[-1] = 0;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		array[10] = 0;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
