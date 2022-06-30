#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:
		//canonical
					WrongCat();
					WrongCat(const WrongCat &other);
					~WrongCat();
		WrongCat	&operator=(const WrongCat &other);

		//move
		void makeSound() const;
};

#endif
