#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstddef>

template <typename T>
class Array
{
	public:
		//canonical
					Array();
					Array(const Array &other);
		Array		&operator=(const Array &other);
		virtual		~Array();
		
		//other constructors
		Array(const std::size_t size);

		//operators
		T			&operator[](const std::size_t index);
		const T 	&operator[](const std::size_t index) const;

		//getter & setter
		std::size_t	size() const;

	private:
		T*				array_;
		std::size_t		size_;
};

#include "Array.tpp"

#endif
