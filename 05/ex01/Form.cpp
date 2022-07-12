#include "Form.hpp"

//canonical

Form::Form() : name_(""), is_signed_(false), grade_sign_(lowest_grade), grade_exe_(lowest_grade)
{

}

Form::Form(const Form &other) : name_(other.name_), is_signed_(other.is_signed_), grade_sign_(other.grade_sign_), grade_exe_(other.grade_exe_)
{
	check_range_all_grades();
}

Form::~Form()
{

}

Form	&Form::operator=(const Form &other)
{
	is_signed_ = other.is_signed_;

	return (*this);
}


//other constructors
Form::Form(const std::string name, const int grade_sign, const int grade_exe) : name_(name), is_signed_(false), grade_sign_(grade_sign), grade_exe_(grade_exe)
{
	check_range_all_grades();
}

Form::Form(const std::string name) : name_(name), is_signed_(false), grade_sign_(lowest_grade), grade_exe_(lowest_grade)
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

//stream operators
std::ostream	&operator<<(std::ostream &stream, const Form &object)
{
	stream << object.getName() << " is signed: " << object.getIsSigned() 
		<< " grade to sign: " << object.getGradeSign()
		<< " grade to execute" << object.getGradeExe();
	return (stream);
}
