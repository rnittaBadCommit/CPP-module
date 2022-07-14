#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat b1("b1", 145);
		Bureaucrat b2("b2", 137);
		ShrubberyCreationForm f1("f1", "home");

		// b2.executeForm(f1);
		b1.signForm(f1);
		b2.executeForm(f1);
		b1.executeForm(f1);
	}
	catch (const std::exception &e)
	{
		std::cout << "main: error" << std::endl;
		std::cout << e.what() << std::endl;
	}

}