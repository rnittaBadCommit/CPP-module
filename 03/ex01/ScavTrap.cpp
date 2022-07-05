#include "ScavTrap.hpp"

//canonical
ScavTrap::ScavTrap() : ScavTrap("ScavTrap"), 
{
	std::cout << "[ScavTrap] Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout <<  "[ScavTrap] Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] Destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "[ScavTrap] Copy assignment operator called" << std::endl;
	ClapTrap::operator=(other);
	return (*this);
}


//other constructor
ScavTrap::ScavTrap(const std::string name) : ClapTrap(name, 100, 50, 20)
{

}


//move
void	ScavTrap::attack(const std::string &target)
{
	unsigned int energy = ClapTrap::getEnergy();
	if (energy >= ClapTrap::energy_per_attack_)
	{
		ClapTrap::setEnergy(energy - ClapTrap::energy_per_attack_);
		std::cout << "[ClapTrap]" << ClapTrap::getName() << " attacks " << target << ", causing " << ClapTrap::getAttackDamage() << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "[ClapTrap]" << ClapTrap::getName() << " doesn't have enough energy" << std::endl;
	}
}




