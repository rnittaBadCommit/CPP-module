#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

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
		void	showIdea(const unsigned int index) const;
		void	changeIdea(const unsigned int index, const std::string new_idea) const;

	private:
		Brain	*brain_;
};

#endif
