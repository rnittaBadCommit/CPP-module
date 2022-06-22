#include "phonebook.hpp"

PhoneBook::PhoneBook() : _num_contact(0), _oldest_contact_index(0)
{

}

PhoneBook::~PhoneBook()
{

}

void	PhoneBook::add_new_contact(const t_contact_info contact_info)
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

void	PhoneBook::show_contact_all_info(const int contact_index) const
{
	_contact_arry[(_oldest_contact_index + contact_index) % 8].show_contact_info();
}

void	PhoneBook::show_contact_basic_info(const Contact contact, const int width) const
{
	std::cout << std::setw(10) << _convert_str_to_limited_width(contact.get_first_name()) << "|";
	std::cout << std::setw(10) << _convert_str_to_limited_width(contact.get_last_name()) << "|";
	std::cout << std::setw(10) << _convert_str_to_limited_width(contact.get_nick_name()) << std::endl;
}

void	PhoneBook::show_all_contact_basic_info(const int width) const
{
	int	contact_index = _oldest_contact_index;
	for (int i = 0; i < _num_contact; i++)
	{
		std::cout << std::setw(10) << i << "|";
		show_contact_basic_info(_contact_arry[contact_index % MAX_CONTACT_NUM], width);
		contact_index++;
	}
}

// int	PhoneBook::execute_command(const std::string command)
// {
// 	if (_is_valid_command(command))
// }


//private

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

bool	PhoneBook::_is_valid_command(const std::string command) const
{
	if (command == "")
		return (false);
	for (int i = 0; !command_arry[i].empty(); i++)
		if (command_arry[i] == command)
			return (true);
	return (false);
}
