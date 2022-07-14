#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern i;
	Bureaucrat b("Alice", 1);

	Form *f = i.makeForm("shrubbery creation", "home");
	b.signForm(*f);
	b.executeForm(*f);
	delete (f);

	f = i.makeForm("abc", "def");
	std::cout << f << std::endl;

}