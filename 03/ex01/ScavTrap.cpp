#include "ScavTrap.hpp"

//canonical
ScavTrap::ScavTrap() : ClapTrap("ScavTrap", 100, 50, 20)
{
	std::cout << "[ScavTrap] Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout <<  "[ScavTrap] Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] Destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	if (this == &other)
		return (*this);
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
		std::cout << "[ScavTrap] " << ClapTrap::getName() << " attacks " << target << ", causing " << ClapTrap::getAttackDamage() << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "[ScavTrap] " << ClapTrap::getName() << " doesn't have enough energy" << std::endl;
	}
}

void	ScavTrap::guardGate() const
{
	std::cout << "[ScavTrap] " << ClapTrap::getName() << " is now in Gatekeeper mode" << std::endl;
}
