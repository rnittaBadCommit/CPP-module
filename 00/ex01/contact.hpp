#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
	public:
		Contact();
		virtual ~Contact();
		void	set_first_name(const std::string first_name);
		void	set_last_name(const std::string last_name);
		void	set_nick_name(const std::string nici_name);
		const std::string &get_first_name() const;
		const std::string &get_last_name() const;
		const std::string &get_nick_name() const;

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nick_name;	
}

#endif
