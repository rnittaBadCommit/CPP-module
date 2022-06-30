#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

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
		void	showIdea(const unsigned int index) const;
		void	changeIdea(const unsigned int index, const std::string new_idea) const;

	private:
		Brain	*brain_;
};

#endif
