#include "contact.hpp"

Contact::Contact()
{
}

Contact::Contact(t_contact_info contact_info)
{
	_contact_info = contact_info;
}

Contact::~Contact()
{
}

void	Contact::show_contact_info() const
{
	std::cout << "first name: " << _contact_info.first_name << std::endl;
	std::cout << "last name: " << _contact_info.last_name << std::endl;
	std::cout << "nick name: " << _contact_info.nick_name << std::endl;
	std::cout << "phone number: " << _contact_info.phone_number << std::endl;
	std::cout << "darkest secret: " << _contact_info.secret_info << std::endl;
}

void	Contact::set_first_name(const std::string first_name)
{
	_contact_info.first_name = first_name;
}

void	Contact::set_last_name(const std::string last_name)
{
	_contact_info.last_name = last_name;
}

void	Contact::set_nick_name(const std::string nick_name)
{
	_contact_info.nick_name = nick_name;
}

void	Contact::set_phone_number(const std::string phone_number)
{
	_contact_info.phone_number = phone_number;
}

void	Contact::set_secret_info(const std::string secret_info)
{
	_contact_info.secret_info = secret_info;
}

void	Contact::set_contact_info(const t_contact_info contact_info)
{
	_contact_info = contact_info;
}

const std::string &Contact::get_first_name() const
{
	return (_contact_info.first_name);
}

const std::string &Contact::get_last_name() const
{
	return (_contact_info.last_name);
}

const std::string &Contact::get_nick_name() const
{
	return (_contact_info.nick_name);
}

const std::string Contact::get_phone_number() const
{
	return (_contact_info.phone_number);
}

const std::string &Contact::get_secret_info() const
{
	return (_contact_info.secret_info);
}

const t_contact_info &Contact::get_contact_info() const
{
	return (_contact_info);
}
