#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat alice;

	std::cout << alice << std::endl;
	std::cout << alice.getName() << std::endl;
	std::cout << alice.getGrade() << std::endl;

	try
	{
		Bureaucrat valid_range("valid1", 1);
		std::cout << valid_range << std::endl;
		valid_range.decrementGrade();
		std::cout << valid_range << std::endl;
		valid_range.incrementGrade();
		std::cout << valid_range << std::endl;
		valid_range.incrementGrade();
		std::cout << valid_range << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat valid_range("valid2", 150);
		std::cout << valid_range << std::endl;
		valid_range.decrementGrade();
		std::cout << valid_range << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat invalid_range("err1", 151);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat invalid_range("err3", 10000);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat invalid_range("err2", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}

