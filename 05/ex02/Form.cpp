#include "Form.hpp"

//canonical

Form::Form() : name_("form"), is_signed_(false), grade_sign_(highest_grade), grade_exe_(highest_grade), target_("target")
{

}

Form::Form(const Form &other) : name_(other.name_), is_signed_(other.is_signed_), grade_sign_(other.grade_sign_), grade_exe_(other.grade_exe_), target_(other.target_)
{
	check_range_all_grades();
}

Form::~Form()
{

}

Form	&Form::operator=(const Form &other)
{
	//is_signed_ = other.is_signed_;
	//do nothing
	(void)other;
	return (*this);
}


//other constructors
Form::Form(const std::string name, const int grade_sign, const int grade_exe, const std::string target) : name_(name), is_signed_(false), grade_sign_(grade_sign), grade_exe_(grade_exe), target_(target)
{

}

Form::Form(const std::string name, const int grade_sign, const int grade_exe) : name_(name), is_signed_(false), grade_sign_(grade_sign), grade_exe_(grade_exe), target_("target")
{
	check_range_all_grades();
}

Form::Form(const std::string name) : name_(name), is_signed_(false), grade_sign_(highest_grade), grade_exe_(highest_grade), target_("target")
{

}

//move
void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= grade_sign_)
	{
		is_signed_ = true;
	}
	else
		throw GradeTooLowException();
}

void	Form::execute(Bureaucrat const & executor) const
{	
	if (!is_signed_)
		throw NotSignedException();
	if (executor.getGrade() <= grade_exe_)
	{
		try
		{
			execute_process(executor);
		}
		catch (const std::exception &e)
		{
			throw e;
		}
	}
	else
		throw GradeTooLowException();
}

//getter & setter
const std::string	&Form::getName() const
{
	return (name_);
}

bool	Form::getIsSigned() const
{
	return (is_signed_);
}

int		Form::getGradeSign() const
{
	return (grade_sign_);
}

int		Form::getGradeExe() const
{
	return (grade_exe_);
}

const std::string	&Form::getTarget() const
{
	return (target_);
}


//private
void	Form::check_range_all_grades()
{
	check_range_grade_(grade_sign_);
	check_range_grade_(grade_exe_);
}

void	Form::check_range_grade_(const int grade)
{
	if (grade < highest_grade)
		throw GradeTooHighException();
	else if (grade > lowest_grade)
		throw GradeTooLowException();
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Grade Too High");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low");
}

const char	*Form::NotSignedException::what() const throw()
{
	return ("Form not signed");
}

//stream operators
std::ostream	&operator<<(std::ostream &stream, const Form &object)
{
	stream << object.getName() << ", is signed: " << object.getIsSigned() 
		<< " grade to sign: " << object.getGradeSign()
		<< " grade to execute " << object.getGradeExe();
	return (stream);
}
