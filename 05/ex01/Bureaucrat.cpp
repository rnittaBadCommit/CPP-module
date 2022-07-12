#include "Bureaucrat.hpp"

//canonical

Bureaucrat::Bureaucrat() : name_("Bureaucrat"), grade_(lowest_grade)
{

}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	*this = other;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
	Bureaucrat(other.name_);
	grade_ = other.grade_;
	return (*this);
}


//other construcotrs
Bureaucrat::Bureaucrat(const std::string name) : name_(name), grade_(lowest_grade)
{

}

Bureaucrat::Bureaucrat(const std::string name, const int grade) : name_(name), grade_(grade)
{
	if (grade > lowest_grade)
	{
		grade_ = lowest_grade;
		throw GradeTooLowException();
	}
	else if (grade < highest_grade)
	{
		grade_ = highest_grade;
		throw GradeTooHighException();
	}
}


//getter & setter
const std::string	&Bureaucrat::getName() const
{
	return (name_);
}

int					Bureaucrat::getGrade() const
{
	return (grade_);
}


//move
void	Bureaucrat::incrementGrade()
{
	if (grade_ > highest_grade)
		grade_--;
	else
		throw GradeTooHighException();
}

void	Bureaucrat::decrementGrade()
{
	if (grade_ < lowest_grade)
		grade_++;
	else
		throw GradeTooLowException();
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << *this << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << *this << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}


const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade Too High");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low");
}


//stream operators
std::ostream	&operator<<(std::ostream &stream, const Bureaucrat &object)
{
	stream << object.getName() << ", bureaucrat grade " << object.getGrade();
	return (stream);
}

