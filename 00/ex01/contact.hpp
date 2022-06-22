#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

struct t_contact_info
{
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;	
	long long int	phone_number;
	std::string secret_info;
};

class Contact
{
	public:
		Contact();
		Contact(t_contact_info contact_info);
		virtual ~Contact();

		void	show_contact_info() const;

		void	set_first_name(const std::string first_name);
		void	set_last_name(const std::string last_name);
		void	set_nick_name(const std::string nick_name);
		void	set_phone_number(const long long int phone_number);
		void	set_secret_info(const std::string secret_info);
		const std::string &get_first_name() const;
		const std::string &get_last_name() const;
		const std::string &get_nick_name() const;
		long long int get_phone_number() const;
		const std::string &get_secret_info() const;

	private:
		t_contact_info _contact_info;
};

#endif
