#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
	try
	{
		Form f1;
		std::cout << f1 << std::endl;

		Form f2("f2");
		std::cout << f2 << std::endl;

		Form f3("f3", 1, 2);
		std::cout << f3 << std::endl;

		Form f4 = f3;
		std::cout << f4 << std::endl;

		Form f5("valid", 1, 1);
		Form f6("valid", 150, 150);
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat b("b1", 100);
		Form f1("f1", 100, 100);
		Form f2("f2", 150, 150);
		Form f3("f3", 1, 1);

		std::cout << f1 << std::endl;
		b.signForm(f1);
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;
		b.signForm(f2);
		std::cout << f2 << std::endl;
		std::cout << f3 << std::endl;
		b.signForm(f3);
		std::cout << f3 << std::endl;

		f3 = f2;
		std::cout << f3 << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	try
	{
		Form invalid("invalid", 0, 1);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Form invalid("invalid", 1, 0);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		Form invalid("invalid", 151, 1);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Form invalid("invalid", 1, 151);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

}