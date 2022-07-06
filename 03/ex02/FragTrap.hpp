#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		//canonical
		FragTrap();
		FragTrap(const FragTrap &other);
		virtual ~FragTrap();
		FragTrap	&operator=(const FragTrap &other);

		//another constructor
		FragTrap(const std::string name);

		//move
		void	attack(const std::string& target);
		void	highFivesGuys() const;

	private:

};

#endif
