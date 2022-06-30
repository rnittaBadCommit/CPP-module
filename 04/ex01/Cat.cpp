#include "Cat.hpp"

//canonical
Cat::Cat() : Animal("Cat")
{
	std::cout << "[Cat] Default constructor called" << std::endl;
	brain_ = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "[Cat] Copy constructor called" << std::endl;
	brain_ = new Brain();
	*this = other;
}

Cat::~Cat()
{
	std::cout << "[Cat] Destructor called" << std::endl;
	delete brain_;
}

Cat	&Cat::operator=(const Cat &other)
{
	type_ = other.type_;
	*brain_ = *other.brain_;
	return (*this);
}

//move
void	Cat::makeSound() const
{
	std::cout << "[Cat] meow meow" << std::endl;
}

void	Cat::showIdea(const unsigned int index) const
{
	std::cout << "Cat has an idea: " << brain_->getIdeas(index) << std::endl;
}

void	Cat::changeIdea(const unsigned int index, const std::string new_idea) const
{
	brain_->setIdeas(index, new_idea);
}
