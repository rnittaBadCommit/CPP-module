#include "ShrubberyCreationForm.hpp"

const char * const ShrubberyCreationForm::suffix_file_name = "_shrubbery";

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


//other constructors
ShrubberyCreationForm::ShrubberyCreationForm(const std::string name, const std::string target)
: Form(name, required_grade_to_sign, required_grade_to_exec, target)
{

}


//move
void	ShrubberyCreationForm::execute_process() const
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
	catch (ft::Exception &e)
	{
		throw e;
	}
	catch (std::exception &e)
	{
		throw e;
	}
}
