#include "Intern.hpp"

const std::string Intern::form_name_arry_[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
// Form *(Intern::* const func_arry_form_make_[3])(const std::string) const = {&Intern::makeShrubbery, &Intern::makeRobotomy, &Intern::makePresidential};

//canonical
Intern::Intern()
{

}

Intern::Intern(const Intern &other)
{
	(void)other;
}

Intern::~Intern()
{

}

Intern	&Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}


//move
Form	*Intern::makeForm(const std::string form_name, const std::string target) const
{
	Form *(Intern::* const func_arry_form_make_[])(const std::string) const = {&Intern::makeShrubbery, &Intern::makeRobotomy, &Intern::makePresidential};
	for (size_t i = 0; i < form_name_arry_->size(); i++)
		if (form_name == form_name_arry_[i])
		{
			std::cout << "Intern creates " << form_name << std::endl;
			return ((this->*func_arry_form_make_[i])(target));
		}
	std::cout << "Intern: invalid form name" << std::endl;
	return (NULL);
}

Form	*Intern::makeShrubbery(const std::string target) const
{
	return (new ShrubberyCreationForm("ShrubberyCreationForm", target));
}

Form	*Intern::makeRobotomy(const std::string target) const
{
	return (new RobotomyRequestForm("RobotomyRequestForm", target));
}

Form	*Intern::makePresidential(const std::string target) const
{
	return (new PresidentialPardonForm("PresidentialPardonForm", target));
}