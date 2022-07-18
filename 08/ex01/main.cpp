#include "Span.hpp"

#include <iostream>

void	 try_shortest_longest(Span &span)
{
	try
	{
		std::cout << "shortest" << std::endl;
		std::cout << span.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "longest" << std::endl;
		std::cout << span.longestSpan() << std::endl;;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main()
{
	Span span(5);

	try_shortest_longest(span);
	span.addNumber(100);
	try_shortest_longest(span);
	span.addNumber(200);
	try_shortest_longest(span);

	span.addNumber(0);
	try_shortest_longest(span);
	span.addNumber(1);
	span.addNumber(1);
	try_shortest_longest(span);

	std::cout << std::endl;

	Span span2(5);
	span2.addNumber(std::numeric_limits<int>::max());
	span2.addNumber(std::numeric_limits<int>::min());
	try_shortest_longest(span2);
	span2.addNumber(0);
	try_shortest_longest(span2);

	std::cout << std::endl;

	Span span3(100000);
	int i = 0;
	try
	{
		for (; ; i++)
			span3.addNumber(i);
	}
	catch (std::exception &e)
	{
		std::cout << i << std::endl;
	}	
}