#include "Zombie.hpp"

#define NUM_ZOMBIE 5

int main()
{
	Zombie *zombie_arry = zombieHorde(NUM_ZOMBIE, "ZOMBIEEE");

	for (int i = 0; i < NUM_ZOMBIE; i++)
		zombie_arry[i].announce();
	
	delete []zombie_arry;
}