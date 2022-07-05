#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		//canonical
		ScavTrap();
		ScavTrap(const ScavTrap &other);
		virtual ~ScavTrap();
		ScavTrap	&operator=(const ScavTrap &other);

		//another constructor
		ScavTrap(const std::string name);

		//move
		void	attack(const std::string& target);
		void	guardGate();

	private:

};

#endif
