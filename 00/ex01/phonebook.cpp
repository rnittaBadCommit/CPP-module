#include "phonebook.hpp"

PhoneBook::PhoneBook() : _is_shell_finished(false), _num_contact(0), _oldest_contact_index(0)
{
	command_arry[0] = "ADD";
	command_arry[1] = "SEARCH";
	command_arry[2] = "EXIT";
	command_arry[3] = "";
}

PhoneBook::~PhoneBook()
{

}

void	PhoneBook::start_shell()
{
	std::string	command;

	while (!_is_shell_finished)
	{
		std::cout << "%>" << std::endl;
		std::getline(std::cin, command);
		if (_is_valid_command(command))
			_execute_command(command);
		else
		{

		}
	}
}


//private

bool	PhoneBook::_is_valid_command(const std::string command) const
{
	if (command == "")
		return (false);
	for (int i = 0; !command_arry[i].empty(); i++)
		if (command_arry[i] == command)
			return (true);
	return (false);
}

void	PhoneBook::_execute_command(const std::string command)
{
	if (command == "ADD")
		_command_add();
	else if (command == "SEARCH")
		_command_search();
	else if (command == "EXIT")
		_command_exit();
}

void	PhoneBook::_add_new_contact(const t_contact_info contact_info)
{
	if (_num_contact < MAX_CONTACT_NUM)
	{
		_contact_arry[_num_contact].set_contact_info(contact_info);
		_num_contact++;
	}
	else
	{
		_contact_arry[_oldest_contact_index].set_contact_info(contact_info);
		_oldest_contact_index = (_oldest_contact_index + 1) % MAX_CONTACT_NUM;
	}
}

void	PhoneBook::_show_contact_all_info(const int contact_index) const
{
	_contact_arry[(_oldest_contact_index + contact_index) % 8].show_contact_info();
}

void	PhoneBook::_show_contact_basic_info(const Contact contact, const int width) const
{
	std::cout << std::setw(width) << _convert_str_to_limited_width(contact.get_first_name()) << "|";
	std::cout << std::setw(width) << _convert_str_to_limited_width(contact.get_last_name()) << "|";
	std::cout << std::setw(width) << _convert_str_to_limited_width(contact.get_nick_name()) << std::endl;
}

void	PhoneBook::_show_all_contact_basic_info(const int width) const
{
	int	contact_index = _oldest_contact_index;
	for (int i = 0; i < _num_contact; i++)
	{
		std::cout << std::setw(10) << i << "|";
		_show_contact_basic_info(_contact_arry[contact_index % MAX_CONTACT_NUM], width);
		contact_index++;
	}
}

void	PhoneBook::_set_contact_info_from_cin(t_contact_info &new_contact_info)
{
	std::cout << "input first name: " << std::endl << "%>";
	std::getline(std::cin, new_contact_info.first_name);
	std::cout << "input last name: " << std::endl << "%>";
	std::getline(std::cin, new_contact_info.last_name);
	std::cout << "input nick name: " << std::endl << "%>";
	std::getline(std::cin, new_contact_info.nick_name);
	std::cout << "input phone number: " << std::endl << "%>";
	std::getline(std::cin, new_contact_info.phone_number);
	std::cout << "input darkest secret: " << std::endl << "%>";
	std::getline(std::cin, new_contact_info.secret_info);
}

bool	PhoneBook::_is_valid_and_put_error_new_contact_info(t_contact_info new_contact_info) const
{
	bool	ret = true;
	if (new_contact_info.first_name.empty())
	{
		std::cout << "invalid first name: first name can't be empty" << std::endl;
		ret = false;
	}
	if (new_contact_info.last_name.empty())
	{
		std::cout << "invalid last name: last name can't be empty" << std::endl;
		ret = false;
	}
	if (new_contact_info.nick_name.empty())
	{
		std::cout << "invalid nick name: nick name can't be empty" << std::endl;
		ret = false;
	}
	if (new_contact_info.phone_number.empty())
	{
		std::cout << "invalid phone number: phone number can't be empty" << std::endl;
		ret = false;
	}
	else if (!is_only_number(new_contact_info.phone_number))
	{
		std::cout << "invalid phone number: (" << new_contact_info.phone_number << ")" << std::endl;
		std::cout << "phone number must contain only number" << std::endl;
		ret = false;
	}
	if (new_contact_info.secret_info.empty())
	{
		std::cout << "invalid darkest secret: darkest secret can't be empty" << std::endl;
		ret = false;
	}
	return (ret);
}

void	PhoneBook::_command_add()
{
	t_contact_info new_contact_info;

	_set_contact_info_from_cin(new_contact_info);
	if (_is_valid_and_put_error_new_contact_info(new_contact_info))
		_add_new_contact(new_contact_info);
}

void	PhoneBook::_command_search()
{
	std::string s_index;

	_show_all_contact_basic_info(10);
	std::cout << "input the index (0 ~ " << _num_contact << ")" << std::endl << "%>";
	std::getline(std::cin, s_index);
	if (is_only_number(s_index))	
	{
		int	i_index = std::stoi(s_index);
		if (i_index <= _num_contact)
			_contact_arry[i_index].show_contact_info();
		else
			std::cout << "invalid index: index need to be 0 ~ " << _num_contact << std::endl;


	}
	else
	{
		std::cout << "invalid index: index must contain only number" << std::endl;
	}
}

void	PhoneBook::_command_exit()
{
	_is_shell_finished = true;
}

const std::string PhoneBook::_convert_str_to_limited_width(const std::string src) const
{
	if (src.length() <= COLUMN_WIDTH)
		return (src);
	else
	{
		std::string ret = src;
		ret.replace(9, ret.length() - COLUMN_WIDTH + 1, ".");
		return (ret);
	}	
}
