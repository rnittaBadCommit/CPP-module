#include "Dog.hpp"

//canonical
Dog::Dog() : Animal("Dog")
{
	std::cout << "[Dog] Default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "[Dog] Copy constructor called" << std::endl;
	*this = other;
}

Dog::~Dog()
{
	std::cout << "[Dog] Destructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &other)
{
	type_ = other.type_;
	return (*this);
}

//move
void	Dog::makeSound() const
{
	std::cout << "[Dog] bow wow" << std::endl;
}
