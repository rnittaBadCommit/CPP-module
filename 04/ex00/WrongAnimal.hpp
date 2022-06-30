#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
	public:
		//canonical
						WrongAnimal();
						WrongAnimal(const WrongAnimal &other);
						~WrongAnimal();
		WrongAnimal		&operator=(const WrongAnimal &other);

		//other structors
		explicit	WrongAnimal(std::string type);

		//getter & setter
		const std::string	&getType() const;

		//movement
		void	makeSound() const;

	protected:
		std::string	type_;
};

#endif
