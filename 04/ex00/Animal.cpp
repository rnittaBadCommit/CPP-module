#include "Animal.hpp"

//canonical
Animal::Animal() : type_("Animal")
{
	std::cout << "[Animal] Default constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "[Animal] Copy constructor called" << std::endl;
	*this = other;
}

Animal::~Animal()
{
	std::cout << "[Animal] Destructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &other)
{
	std::cout << "[Animal] Copy assignment operator called" << std::endl;
	type_ = other.type_;
	return (*this);
}

//other structors
Animal::Animal(const std::string type) : type_(type)
{
	
}

const std::string	&Animal::getType() const
{
	return (type_);
}

void	Animal::makeSound() const
{
	std::cout << "[Animal] ..." << std::endl;
}
