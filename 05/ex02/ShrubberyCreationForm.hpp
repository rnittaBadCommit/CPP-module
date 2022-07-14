#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "Form.hpp"
# include "utils/ft_utils.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		//statics
		static const int	required_grade_to_sign = 145;
		static const int	required_grade_to_exec = 137;
		static const char * const suffix_file_name;

		//canonical
					ShrubberyCreationForm();
					ShrubberyCreationForm(const ShrubberyCreationForm &other);
		virtual		~ShrubberyCreationForm();
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &other);

		//other constructors
		ShrubberyCreationForm(const std::string name, const std::string target);

	private:
		void	execute_process() const;

};

#endif
