#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	public:
		Weapon();
		Weapon(std::string type);
		virtual ~Weapon();
		const std::string	&getType() const;
		void	setType(const std::string type);

	private:
		std::string _type;
};

#endif
