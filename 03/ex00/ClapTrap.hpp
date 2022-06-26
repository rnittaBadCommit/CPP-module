#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public:
		//canonical
		ClapTrap();
		ClapTrap(const ClapTrap &other);
		virtual ~ClapTrap();
		ClapTrap	&operator=(const ClapTrap &other);

		//additional constructor
		ClapTrap(std::string name);

		//mandatory in subject
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
		std::string	name_;
		unsigned int	hp_;
		unsigned int	energy_;
		unsigned int	attack_damage_;
		static const int	energy_per_attack_ = 1;
		static const int	energy_per_repair_ = 1;
};

#endif
