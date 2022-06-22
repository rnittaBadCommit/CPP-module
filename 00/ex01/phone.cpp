#include "phone.hpp"

Phone::Phone()
{

}

Phone::~Phone()
{

}

void	Phone::start_phone_shell()
{
	Phone phone;
	std::string	command;

	while (1)
	{
		std::cout << "%>" << std::endl;
		std::getline(std::cin, command);
		if (phone._PhoneBook.is_valid_command(command))
			phone._execute_command(command);
		else
			;
	}
}


void	Phone::_execute_command(const std::string command)
{
	
}
