# include "PresidentialPardonForm.hpp"

//canonical
PresidentialPardonForm::PresidentialPardonForm()
: Form("PresidentialPardonForm", required_grade_to_sign, required_grade_to_exec, "target")
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
: Form(other)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	//do nothing
	(void)other;
	return (*this);
}


//other constructors
PresidentialPardonForm::PresidentialPardonForm(const std::string name, const std::string target)
: Form(name, required_grade_to_sign, required_grade_to_exec, target)
{

}


//move
void	PresidentialPardonForm::execute_process() const
{
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}


