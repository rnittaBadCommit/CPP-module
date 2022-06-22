#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "contact.hpp"
#include "ft_utils.hpp"

#define MAX_CONTACT_NUM 8
#define COLUMN_WIDTH 10
#define COMMAND_NUM 3

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	start_shell();

	private:
		bool	_is_shell_finished;
		int	_num_contact;
		int	_oldest_contact_index;
		Contact _contact_arry[MAX_CONTACT_NUM];
		std::string command_arry[COMMAND_NUM + 1];
		bool	_is_valid_command(const std::string command) const;
		void	_execute_command(const std::string command);
		void	_add_new_contact(const t_contact_info contact_info);
		void	_show_contact_all_info(const int contact_index) const;
		void	_show_contact_basic_info(const Contact contact, const int width) const;
		void	_show_all_contact_basic_info(const int width) const;
		void	_set_contact_info_from_cin(t_contact_info &contact_info);
		bool	_is_valid_and_put_error_new_contact_info(t_contact_info new_contact_info) const;
		void	_command_add();
		void	_command_search();
		void	_command_exit();
		const std::string _convert_str_to_limited_width(const std::string src) const;
};

#endif
