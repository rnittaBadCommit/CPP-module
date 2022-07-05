#include "ClapTrap.hpp"


//canonical
ClapTrap::ClapTrap() : name_("ClapTrap"), hp_(10), energy_(10), attack_damage_(0)
{
	std::cout << "[ClapTrap] Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "[ClapTrap] Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap()
{
	std::cout << "[ClapTrap] Destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "[ClapTrap] Copy assignment operator called" << std::endl;
	name_ = other.name_;
	energy_ = other.energy_;
	attack_damage_ = other.attack_damage_;
	return (*this);
}

//additional constructor
ClapTrap::ClapTrap(std::string name) : name_(name), hp_(10), energy_(10), attack_damage_(0)
{
	std::cout << "[ClapTrap] name set constructor called" << std::endl;
}


//mandatory in subject
void	ClapTrap::attack(const std::string& target)
{
	if (energy_ >= energy_per_attack_)
	{
		energy_ -= energy_per_attack_;
		std::cout << name_ << " attacks " << target << ", causing " << attack_damage_ << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << name_ << " doesn't have enough energy" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount < hp_)
		hp_ -= amount;
	else
		hp_ = 0;

	std::cout << name_ << " takes " << amount << " damage..." << std::endl << "now, " << name_ << " has " << hp_ << " hit points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energy_ >= energy_per_repair_)
	{
		hp_ += amount;
		energy_ -= energy_per_repair_;

		std::cout << name_ << " is repaired " << amount << " points, now, " << name_ << " has " << hp_ << " hit points" << std::endl;
	}
	else
	{
		std::cout << name_ << " doesn't have enough energy" << std::endl;
	}
}
