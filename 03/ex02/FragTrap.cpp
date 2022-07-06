#include "FragTrap.hpp"

//canonical
FragTrap::FragTrap() : ClapTrap("FragTrap", 100, 100, 30)
{
	std::cout << "[FragTrap] Default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout <<  "[FragTrap] Copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] Destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	if (this == &other)
		return (*this);
	std::cout << "[FragTrap] Copy assignment operator called" << std::endl;
	ClapTrap::operator=(other);
	return (*this);
}


//other constructor
FragTrap::FragTrap(const std::string name) : ClapTrap(name, 100, 100, 30)
{

}


//move
void	FragTrap::attack(const std::string &target)
{
	unsigned int energy = ClapTrap::getEnergy();
	if (energy >= ClapTrap::energy_per_attack_)
	{
		ClapTrap::setEnergy(energy - ClapTrap::energy_per_attack_);
		std::cout << "[FragTrap] " << ClapTrap::getName() << " attacks " << target << ", causing " << ClapTrap::getAttackDamage() << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "[FragTrap] " << ClapTrap::getName() << " doesn't have enough energy" << std::endl;
	}
}

void	FragTrap::highFivesGuys() const
{
	std::cout << "[FragTrap] " << ClapTrap::getName() << " is here!" << std::endl;
}
