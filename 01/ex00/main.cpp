#include "Zombie.hpp"

int main()
{
	Zombie *zombie1 = newZombie("Zombie1");
	Zombie *zombie2 = newZombie("Zombie2");
	Zombie *zombie3 = newZombie("Zombie3");

	std::cout << std::endl;

	zombie3->announce();
	zombie2->announce();
	zombie1->announce();

	std::cout << std::endl;

	delete zombie1;
	delete zombie3;
	delete zombie2;

	std::cout << std::endl;
	std::cout << std::endl;

	randomChump("zombie4");
	randomChump("zombie5");
	randomChump("zombie6");
}
