#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}

	{
		int	i;
		const int	num_animal = 10;
		Animal *animal_ary[num_animal];
		for (i = 0; i < num_animal / 2; i++)
		{
			animal_ary[i] = new Cat();
			std::cout << std::endl;
		}
		for (; i < num_animal; i++)
		{
			animal_ary[i] = new Dog();
			std::cout << std::endl;
		}
		std::cout << std::endl;
		for (i = 0; i < num_animal; i++)
		{
			delete animal_ary[i];
			std::cout << std::endl;
		}
	}
		std::cout << std::endl << std::endl;
	{
		Cat	cat1;
		cat1.changeIdea(0, "eat fish");
		cat1.changeIdea(1, "sleep");

		std::cout << std::endl;
		
		Cat	cat2(cat1);
		cat2.showIdea(0);
		cat2.showIdea(1);
		cat2.changeIdea(0, "play");
		cat2.showIdea(0);
		cat2.showIdea(1);
		cat1.showIdea(0);

		std::cout << std::endl;

		Cat	cat3;
		cat3 = cat1;
		cat3.showIdea(0);
		cat3.showIdea(1);
		cat3.changeIdea(0, "play");
		cat3.showIdea(0);
		cat3.showIdea(1);
		cat1.showIdea(0);
	}

	
	{
		// Animal animal;
	}


	return (0);
}
