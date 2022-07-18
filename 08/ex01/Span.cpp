#include "Span.hpp"

//canonical
Span::Span()
: data_(0), max_size_(0)
{

}

Span::Span(const Span &other)
{
	*this = other;
}

Span::~Span()
{

}

Span	&Span::operator=(const Span &other)
{
	data_ = other.data_;
	max_size_ = other.max_size_;

	return *this;
}


//other constructors
Span::Span(unsigned int size)
: data_(0), max_size_(size)
{

}

void	Span::addNumber(int new_data)
{
	if (data_.size() >= max_size_)
		throw std::exception();
	
	data_.push_back(new_data);
}

unsigned int	Span::shortestSpan()
{
	if (data_.size() < 2)
		throw std::exception();

	std::vector<int>	tmp = data_;
	std::sort(tmp.begin(), tmp.end());

	unsigned int	ret = std::numeric_limits<unsigned int>::max();
	for (size_t i = 1; i < tmp.size(); i++)
		if (static_cast<unsigned int> (tmp[i] - tmp[i - 1]) < ret)
			ret = static_cast<unsigned int> (tmp[i] - tmp[i - 1]);
	return (ret);
}

unsigned int	Span::longestSpan()
{
	if (data_.size() < 2)
		throw std::exception();
	
	std::vector<int>	tmp = data_;
	std::sort(tmp.begin(), tmp.end());
	return (*(tmp.end() - 1) - *tmp.begin());
}


