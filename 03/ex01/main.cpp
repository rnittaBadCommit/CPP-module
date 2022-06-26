#include "ClapTrap.hpp"

int main()
{
	ClapTrap clapTrap1("trap 1");

	clapTrap1.attack("someone");
	clapTrap1.takeDamage(8);
	clapTrap1.beRepaired(10);

	clapTrap1.takeDamage(100);
	clapTrap1.beRepaired(1);
}