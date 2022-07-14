#include "RobotomyRequestForm.hpp"

//canonical
RobotomyRequestForm::RobotomyRequestForm()
: Form("RobotomyRequestForm", required_grade_to_sign, required_grade_to_exec, "target")
{
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
: Form(other)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	//do nothing
	(void)other;
	return (*this);
}

//other constructors
RobotomyRequestForm::RobotomyRequestForm(const std::string name, const std::string target)
: Form(name, required_grade_to_sign, required_grade_to_exec, target)
{
	srand(time(NULL));
}


//move
void	RobotomyRequestForm::execute_process() const
{
	std::cout << "DRILLLLLIIIIIINNNNNGGGGGGGGG!!!" << std::endl;
	if (std::rand() % 2)
		std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->getTarget() << " failed to robotomize, OMG" << std::endl;

}
