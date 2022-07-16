#include "TypeConversion.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "invalid number of args" << std::endl;
		return (1);
	}
	try
	{
		TypeConversion	TC(argv[1]);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
}