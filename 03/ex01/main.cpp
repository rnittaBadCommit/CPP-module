#include "ScavTrap.hpp"

int main()
{
	// ClapTrap claptrap("trap 1");

	ScavTrap scavtrap;

	scavtrap.attack("target1");
	scavtrap.guardGate();
	scavtrap.takeDamage(8);
	scavtrap.beRepaired(10);

	scavtrap.takeDamage(100);
	scavtrap.beRepaired(1);

	std::cout << std::endl;
	
	ScavTrap scavtrap2("scavtrap2");
	scavtrap2.attack("target1");
	scavtrap2.guardGate();
}
