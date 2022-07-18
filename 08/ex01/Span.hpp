#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <vector>
# include <limits>

class	Span
{
	public:
		//canonical
				Span();
				Span(const Span &other);
		virtual	~Span();
		Span	&operator=(const Span &other);

		//other constructors
		Span(unsigned int size);

		//move
		void	addNumber(const int new_data);
		unsigned int shortestSpan();
		unsigned int longestSpan();

	private:
		std::vector<int>	data_;
		unsigned int		max_size_;
};

#endif
