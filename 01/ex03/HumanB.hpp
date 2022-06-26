#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon *weapon);
		virtual	~HumanB();
		void	attack() const;

	private:
		Weapon	*_weapon;
		std::string	_name;
};

#endif
