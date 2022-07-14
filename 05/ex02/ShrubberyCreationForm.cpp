#include "ShrubberyCreationForm.hpp"

//canonical

ShrubberyCreationForm::ShrubberyCreationForm()
: Form("ShrubberyCreationForm", required_grade_to_sign, required_grade_to_exec, "target")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
: Form(other)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	//do nothing
	(void)other;
	return (*this);
}

void	ShrubberyCreationForm::execute_process(const Bureaucrat executor) const
{
	try
	{
		std::string	ascii_tree = 
		"     |\n"
		"     |\n"
		"_____|_____\n"
		"    /|\\\n"
		"   / | \\\n"
		"  /  |  \\\n"
		" /   |   \\\n"
		"/    |    \\\n";
		ft::str_to_file(this->getTarget() + (std::string)suffix_file_name, ascii_tree);
	}
	catch (const std::exception &e)
	{
		throw e;
	}
}
