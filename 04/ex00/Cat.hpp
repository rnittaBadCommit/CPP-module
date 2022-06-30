#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal
{
	public:
		//canonical
					Cat();
					Cat(const Cat &other);
		virtual		~Cat();
		Cat			&operator=(const Cat &other);

		//move
		virtual void makeSound() const;
};

#endif
