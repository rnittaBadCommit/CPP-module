#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template < typename T >
class Array
{
	public:
		//canonical
					Array();
					Array(const Array &other);
		virtual		~Array();
		Array		&operator=(const Array &other);
		
		//other constructors
		Array(const size_t size);

		//operators
		T			&operator[](const size_t index);
		const T 	&operator[](const size_t index) const;

		//getter & setter
		size_t	size() const;

	private:
		T*		array_;
		size_t	size_;
};

#include "Array.tpp"

#endif
