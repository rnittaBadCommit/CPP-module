#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class	Brain
{
	public:
		//canonical
					Brain();
					Brain(const Brain &other);
		virtual		~Brain();
		Brain		&operator=(Brain const &other);

		//getter & settere
		const std::string	&getIdeas(const unsigned int index) const;
		void				setIdeas(const unsigned int index, const std::string new_idea);

		static const int	maxIdeas = 100;

	private:
		std::string			ideas_[maxIdeas + 1];

};

#endif
