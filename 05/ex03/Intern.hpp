#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		//canonical
					Intern();
					Intern(const Intern &other);
		virtual		~Intern();
		Intern		&operator=(const Intern &other);

		//move
		Form	*makeForm(const std::string form_name, const std::string target) const;
        Form	*makeShrubbery(const std::string target) const;
        Form	*makeRobotomy(const std::string target) const;
        Form	*makePresidential(const std::string target) const;

	private:
		static const std::string form_name_arry_[];
		// Form *(Intern::* const func_arry_form_make_[3])(const std::string) const;
		
};

#endif
