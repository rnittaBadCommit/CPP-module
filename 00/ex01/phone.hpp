#ifndef PHONE_HPP
# define PHONE_HPP

# include "phonebook.hpp"

class Phone
{
	public:
		Phone();
		~Phone();
		void	start_phone_shell();

	private:
		PhoneBook	_PhoneBook;
		void	_execute_command(const std::string command);
		void	_command_add();
		void	_command_search();
		void	_command_exit();
};

#endif;
