#include "contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

const std::string &Contact::get_first_name()
{
	return (_first_name);
}

const std::string &Contact::get_last_name()
{
	return (_last_name);
}

const std::string &Contact::get_nick_name()
{
	return (_nick_name);
}

void	Contact::set_first_name(const std::string first_name)
{
	_first_name = first_name;
}

void	Contact::set_last_name(const std::string last_name)
{
	_last_name = last_name;
}

void	Contact::set_nick_name(const std::string nick_name)
{
	_nick_name = nick_name;
}
