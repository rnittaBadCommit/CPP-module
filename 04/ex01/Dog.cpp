#include "Dog.hpp"

//canonical
Dog::Dog() : Animal("Dog")
{
	std::cout << "[Dog] Default constructor called" << std::endl;
	brain_ = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "[Dog] Copy constructor called" << std::endl;
	brain_ = new Brain();
}

Dog::~Dog()
{
	std::cout << "[Dog] Destructor called" << std::endl;
	delete brain_;
}

Dog	&Dog::operator=(const Dog &other)
{
	type_ = other.type_;
	return (*this);
}

//move
void	Dog::makeSound() const
{
	std::cout << "[Dog] meow meow" << std::endl;
}

void	Dog::showIdea(const unsigned int index) const
{
	std::cout << "Dog has an idea: " << brain_->getIdeas(index) << std::endl;
}

void	Dog::changeIdea(const unsigned int index, const std::string new_idea) const
{
	brain_->setIdeas(index, new_idea);
}
