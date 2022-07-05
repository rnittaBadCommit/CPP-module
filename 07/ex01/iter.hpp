#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	iter(T *array, size_t size, void (*f)(T&))
{
	if (array == NULL || f == NULL)
		return ;
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}

template<typename T>
void	iter(const T *array, size_t size, void (*f)(const T&))
{
	if (array == NULL || f == NULL)
		return ;
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}

#endif
