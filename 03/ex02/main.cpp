#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	// ClapTrap claptrap("trap 1");
	{
		FragTrap fragtrap;
		fragtrap.attack("target1");
		fragtrap.highFivesGuys();
		fragtrap.takeDamage(8);
		fragtrap.beRepaired(10);

		fragtrap.takeDamage(100);
		fragtrap.beRepaired(1);

		FragTrap fragtrap2("fragtrap2");
		fragtrap2.attack("target1");
		fragtrap2.highFivesGuys();
	}

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
