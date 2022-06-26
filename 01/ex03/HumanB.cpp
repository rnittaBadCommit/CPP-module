#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{

}

HumanB::HumanB(std::string name, Weapon *weapon) : _name(name), _weapon(weapon)
{

}

void	HumanB::attack() const
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " doesn't have any weapon" << std::endl;
}


