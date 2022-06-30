#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type_("WrongAnimal")
{
	std::cout << "[WrongAnimal] Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "[WrongAnimal] Copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] Destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "[WrongAnimal] Copy assignment operator called" << std::endl;
	type_ = other.type_;
	return (*this);
}

WrongAnimal::WrongAnimal(const std::string type) : type_(type)
{
	
}

const std::string	&WrongAnimal::getType() const
{
	return (type_);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "[WrongAnimal] ..." << std::endl;
}
