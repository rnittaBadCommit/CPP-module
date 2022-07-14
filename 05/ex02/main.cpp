#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		std::cout << "========TEST General Use========" << std::endl;
		
		Bureaucrat b1("b1", ShrubberyCreationForm::required_grade_to_sign + 1);
		Bureaucrat b2("b2", ShrubberyCreationForm::required_grade_to_exec + 1);
		Bureaucrat b_low();
		ShrubberyCreationForm f1("f1", "home");

		b1.signForm(f1);
		b1.incrementGrade();
		b1.signForm(f1);
		
		std::cout << std::endl;

		b2.executeForm(f1);
		b2.incrementGrade();
		b2.executeForm(f1);


		std::cout << std::endl << std::endl;

		std::cout << "sudo chmod 000 home_shrubbery" << std::endl;
		system("sudo chmod 000 home_shrubbery");
		b2.executeForm(f1);
		std::cout << "sudo chmod 777 home_shrubbery" << std::endl;
		system("sudo chmod 777 home_shrubbery");
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "main: error" << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::cout << "========TEST Shrubbery Creation========" << std::endl;
		Bureaucrat b1("b1", 145);
		Bureaucrat b2("b2", 137);
		ShrubberyCreationForm f1("f1", "home");

		b2.executeForm(f1);
		b1.signForm(f1);
		b2.executeForm(f1);
		b1.executeForm(f1);
	}
	catch (const std::exception &e)
	{
		std::cout << "main: error" << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::cout << "========TEST Robotomy Request========" << std::endl;
		Bureaucrat b1("b1", 72);
		Bureaucrat b2("b2", 45);
		RobotomyRequestForm f1("f1", "home");

		b1.signForm(f1);
		b2.executeForm(f1);
		b2.executeForm(f1);
		b2.executeForm(f1);
		b2.executeForm(f1);
		b2.executeForm(f1);
		b2.executeForm(f1);
	}
	catch (const std::exception &e)
	{
		std::cout << "main: error" << std::endl;
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	try
	{
		std::cout << "========TEST Presidential Pardon========" << std::endl;
		Bureaucrat b1("b1", 25);
		Bureaucrat b2("b2", 5);
		PresidentialPardonForm f1("f1", "Alice");

		b1.signForm(f1);
		b2.executeForm(f1);
	}
	catch (const std::exception &e)
	{
		std::cout << "main: error" << std::endl;
		std::cout << e.what() << std::endl;
	}

}