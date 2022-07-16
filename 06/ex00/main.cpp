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
		TC.display();
		#if TEST
			std::cout << std::endl;
		#endif
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
}
