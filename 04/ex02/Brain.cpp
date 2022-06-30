#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] Default constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "[Animal] Copy constructor called" << std::endl;
	*this = other;
}

Brain::~Brain()
{
	std::cout << "[Brain] Destructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &other)
{
	std::cout << "[Brain] Copy assignment operator called" << std::endl;
	for (int i = 0; i < maxIdeas; i++)
		ideas_[i] = other.ideas_[i];
	return (*this);
}

const std::string	&Brain::getIdeas(const unsigned int index) const
{
	if (index >= maxIdeas)
		return (ideas_[maxIdeas]);
	else
		return (ideas_[index]);
}

void	Brain::setIdeas(const unsigned int index, const std::string new_idea)
{
	if (index >= maxIdeas)
		return;
	else
		ideas_[index] = new_idea;
}
