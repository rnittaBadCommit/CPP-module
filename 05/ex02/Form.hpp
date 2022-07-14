#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

# include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
	public:
		//statics
		static const int	lowest_grade = 150;
		static const int	highest_grade = 1;
		
		//canonical
					Form();
					Form(const Form &other);
		virtual		~Form();
		Form		&operator=(const Form &other);
		
		//other constructors
		Form(const std::string name, const int grade_sign, const int grade_exe);
		Form(const std::string name);


		//move
		void	beSigned(const Bureaucrat &bureaucrat);
		void	execute(Bureaucrat const & executor) const;


		//getter & setter
		const std::string	&getName() const;
		bool				getIsSigned() const;
		int					getGradeSign() const;
		int					getGradeExe() const;


	private:
		void	check_range_all_grades();
		void	check_range_grade_(const int grade);
		virtual void	execute_process() const = 0;

		const std::string	name_;
		bool				is_signed_;
		const int			grade_sign_;
		const int			grade_exe_;

		class	GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw();
		};

};

// stream operators
std::ostream	&operator<<(std::ostream &stream, const Form &object);

#endif