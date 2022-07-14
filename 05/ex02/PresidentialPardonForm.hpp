#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		//statics
		static const int	required_grade_to_sign = 25;
		static const int	required_grade_to_exec = 5;

		//canonical
					PresidentialPardonForm();
					PresidentialPardonForm(const PresidentialPardonForm &other);
		virtual		~PresidentialPardonForm();
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &other);

		//other constructors
		PresidentialPardonForm(const std::string name, const std::string target);

	private:
		void	execute_process() const;
};

#endif
