#include "WrongCat.hpp"

//canonical
WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "[WrongCat] Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << "[WrongCat] Copy constructor called" << std::endl;
	*this = other;
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] Destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	type_ = other.type_;
	return (*this);
}

//move
void	WrongCat::makeSound() const
{
	std::cout << "[WrongCat] meow meow" << std::endl;
}
