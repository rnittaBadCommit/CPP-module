#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include <cstdlib>
# include <ctime>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		//statics
		static const int	required_grade_to_sign = 72;
		static const int	required_grade_to_exec = 45;

		//canonical
					RobotomyRequestForm();
					RobotomyRequestForm(const RobotomyRequestForm &other);
		virtual		~RobotomyRequestForm();
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &other);

		//other constructors
		RobotomyRequestForm(const std::string name, const std::string target);

	private:
		void	execute_process() const;
		
};

#endif
