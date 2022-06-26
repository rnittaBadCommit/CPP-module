#include "ClapTrap.hpp"


//canonical
ClapTrap::ClapTrap() : name_(""), hp_(10), energy_(10), attack_damage_(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	*this = other;
	return (*this);
}

//additional constructor
ClapTrap::ClapTrap(std::string name) : name_(name), hp_(10), energy_(10), attack_damage_(0)
{
	std::cout << "name set constructor called" << std::endl;
}


//mandatory in subject
void	ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << name_ << " attacks " << target << ", causing " << attack_damage_ << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount < hp_)
		hp_ -= amount;
	else
		hp_ = 0;

	std::cout << "ClapTrap " << name_ << " takes " << amount << " damage... now, " << name_ << " has " << hp_ << " hit points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	hp_ += amount;

	std::cout << "ClapTrap " << name_ << " is repaired " << amount << " points, now, " << name_ << " has " << hp_ << " hit points" << std::endl;
}
