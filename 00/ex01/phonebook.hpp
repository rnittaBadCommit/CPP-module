#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "contact.hpp"

#define MAX_CONTACT_NUM 8
#define COLUMN_WIDTH 10
#define COMMAND_NUM 3

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	add_new_contact(const t_contact_info contact_info);
		void	show_contact_all_info(const int contact_index) const;
		void	show_contact_basic_info(const Contact contact, const int width) const;
		void	show_all_contact_basic_info(const int width) const;
		int		execute_command(const std::string command);
		bool	is_valid_command(const std::string command) const;

	private:
		int	_num_contact;
		int	_oldest_contact_index;
		Contact _contact_arry[MAX_CONTACT_NUM];
		const std::string command_arry[COMMAND_NUM + 1] = {"ADD", "SEARCH", "EXIT", ""};

		const std::string _convert_str_to_limited_width(const std::string src) const;
		bool	is_valid_command(const std::string command) const;

};

#endif
