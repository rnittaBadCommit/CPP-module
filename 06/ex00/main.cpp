#include "TypeConversion.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "invalid number of args" << std::endl;
		return (1);
	}
	TypeConversion	TC(argv[1]);
	TC.displayChar();
	TC.displayInt();
}