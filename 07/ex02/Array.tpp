#ifndef ARRAY_TPP
# define ARRAY_TPP

# include <iostream>

template <typename T>
Array<T>::Array() : array_(new T[0]), size_(0)
{
	std::cout << "[Array] Default constructor called" << std::endl;
}

template<typename T>
Array<T>::Array(const Array &other) : array_(new T[0])
{
	std::cout << "[Array] Copy constructor called" << std::endl;
	*this = other;	
}

template<typename T>
Array<T>	&Array<T>::operator=(const Array &other)
{
	std::cout << "[Array] Copy assignment called" << std::endl;
	if (this == &other)
		return (*this);
	size_ = other.size_;
	delete []array_;
	try
	{
		array_ = new T[size_];
		for (std::size_t i = 0; i < size_; i++)
			array_[i] = other.array_[i];
	}
	catch (const std::bad_alloc &e)
	{
		std::cout << "[Array] " << e.what() << std::endl;
		throw std::bad_alloc();
	}
	return (*this);
}

template<typename T>
Array<T>::~Array()
{
	std::cout << "[Array] Destructor called" << std::endl;	
	delete []array_;
}

//other constructors
template<typename T>
Array<T>::Array(const std::size_t size) : size_(size)
{
	std::cout << "[Array] Constructor with size called" << std::endl;
	try
	{
		array_ = new T[size_]();
	}
	catch(const std::bad_alloc &e)
	{
		std::cout << "[Array] " << e.what() << std::endl;
		throw std::bad_alloc();
	}
}


//getter & setter
template<typename T>
T	&Array<T>::operator[](const std::size_t index)
{
	if (index >= size_)
		throw std::exception();
	return (array_[index]);
}

template<typename T>
const T		&Array<T>::operator[](const std::size_t index) const
{
	if (index >= size_)
		throw std::exception();
	return (array_[index]);
}



template<typename T>
std::size_t	Array<T>::size() const
{
	return (size_);
}

#endif
