#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class	Bureaucrat
{
	public:
		//statics
		static const int	lowest_grade = 150;
		static const int	highest_grade = 1;

		//canonical
					Bureaucrat();
					Bureaucrat(const Bureaucrat &other);
		virtual		~Bureaucrat();
		Bureaucrat	&operator=(const Bureaucrat &other);

		//other constructors
					Bureaucrat(const std::string name);
					Bureaucrat(const std::string name, const int grade);
		//move
		void	incrementGrade();
		void	decrementGrade();
		void	signForm();

		//getter & setter
		const std::string	&getName() const;
		int					getGrade() const;



	private:
		const std::string	name_;
		int					grade_;

		class	GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &stream, const Bureaucrat &object);

#endif
