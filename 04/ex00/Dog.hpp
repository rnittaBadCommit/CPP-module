#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal
{
	public:
		//canonical
					Dog();
					Dog(const Dog &other);
		virtual		~Dog();
		Dog			&operator=(const Dog &other);

		//move
		virtual void makeSound() const;
};

#endif
