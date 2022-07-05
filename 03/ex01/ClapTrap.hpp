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
		ClapTrap(const std::string name);
		ClapTrap(const std::string name, const unsigned int hp_, const unsigned int energy, const unsigned int attack_damage);

		//mandatory in subject
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		//getter & setter
		const std::string	&getName() const;
		unsigned int	getHp() const;
		unsigned int	getEnergy() const;
		unsigned int	getAttackDamage() const;
		void	setName(const std::string name);
		void	setHp(const unsigned int hp);
		void	setEnergy(const unsigned int energy);
		void	setAttackDamage(const unsigned int damage);

		static const int	energy_per_attack_ = 1;
		static const int	energy_per_repair_ = 1;

	private:
		std::string	name_;
		unsigned int	hp_;
		unsigned int	energy_;
		unsigned int	attack_damage_;
};

#endif
