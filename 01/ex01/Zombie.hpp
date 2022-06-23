#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		virtual  ~Zombie();
		void	announce(void);
		void	set_name(const std::string name);

	private:
		std::string _name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);
Zombie*	zombieHorde(int N, std::string name);

#endif
