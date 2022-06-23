#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	if (N < 0)
		return (NULL);
	Zombie *new_zombie_arry = new Zombie[N];
	for (int i = 0; i < N; i++)
		new_zombie_arry[i].set_name(name);
	return (new_zombie_arry);
}
