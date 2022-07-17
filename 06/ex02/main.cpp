#include <iostream>
# include <cstdlib>
// # include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	Base	*ret;

	switch (rand() % 3)
	{
		case 0:
			#if TEST
				std::cout << "generate: A !" << std::endl;
			#endif
			ret = new (A);
			break;
		case 1:
			#if TEST
				std::cout << "generate: B !" << std::endl;
			#endif
			ret = new B;
			break;
		case 2:
			#if TEST
				std::cout << "generate: C !" << std::endl;
			#endif
			ret = new C;
			break;
	}
	return (ret);
}

void	identify(Base* p)
{
	std::cout << "type: ";

	if (dynamic_cast<A *> (p))
		std::cout << "A !" << std::endl;
	else if (dynamic_cast<B *> (p))
		std::cout << "B !" << std::endl;
	else if (dynamic_cast<C *> (p))
		std::cout << "C !" << std::endl;
	else
		std::cout << "Error: none of Type A, B, C..." << std::endl;
}

void	idendify(Base& p)
{
	std::cout << "type: ";

	try
	{
		dynamic_cast<A &> (p);
		std::cout << "A !" << std::endl;
	}
	catch (std::exception &e)
	{
		try
		{
			dynamic_cast<B &> (p);
			std::cout << "B !" << std::endl;
		}
		catch (std::exception &e)
		{
			try
			{
				dynamic_cast<C &> (p);
				std::cout << "C !" << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << "Error: none of Type A, B, C..." << std::endl;
			}
		}
	}
}

int	main()
{
	Base	*base = NULL;
	identify(base);
	
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		Base *base = generate();
		identify(base);
		identify(*base);
		delete base;
	}
}
