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
		static constexpr const char const		*suffix_file_name  = "_shrubbery";

		//canonical
					ShrubberyCreationForm();
					ShrubberyCreationForm(const ShrubberyCreationForm &other);
		virtual		~ShrubberyCreationForm();
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &other);

	private:
		void	execute_process(const Bureaucrat executor) const;

};

#endif
