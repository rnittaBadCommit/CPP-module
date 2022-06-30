#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal
{
	public:
		//canonical
					Animal();
					Animal(const Animal &other);
		virtual		~Animal();
		Animal		&operator=(const Animal &other);

		//other structors
		explicit	Animal(const std::string type);

		//getter & setter
		const std::string	&getType() const;

		//movement
		virtual void	makeSound() const = 0;

	protected:
		std::string	type_;
};

#endif
