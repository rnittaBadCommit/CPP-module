#include "Data.hpp"

//canonical
Data::Data()
: name_("")
{

}

Data::Data(const Data &other)
{
	*this = other;
}

Data::~Data()
{

}

Data	&Data::operator=(const Data &other)
{
	name_ = other.name_;

	return (*this);
}


//other constructors
Data::Data(const std::string name)
: name_(name)
{
	
}


//getter & setter
const std::string	&Data::getName() const
{
	return (name_);
}

void	Data::setName(const std::string name)
{
	name_ = name;
}


//serialize()
uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t> (ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
