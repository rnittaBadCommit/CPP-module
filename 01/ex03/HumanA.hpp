#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon weapon);
		virtual	~HumanA();
		void	attack() const;

	private:
		Weapon	&_weapon;
		std::string	_name;
};

#endif
