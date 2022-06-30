#include "Cat.hpp"

//canonical
Cat::Cat() : Animal("Cat")
{
	std::cout << "[Cat] Default constructor called" << std::endl;
}

Cat::Cat(const Cat &other)
{
	std::cout << "[Cat] Copy constructor called" << std::endl;
	*this = other;
}

Cat::~Cat()
{
	std::cout << "[Cat] Destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &other)
{
	type_ = other.type_;
	return (*this);
}

//move
void	Cat::makeSound() const
{
	std::cout << "[Cat] meow meow" << std::endl;
}
