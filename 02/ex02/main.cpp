#include "Fixed.hpp"

int main( void ) {
	Fixed a;

	std::cout << "check increment" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << std::endl;

	std::cout << "check decrement" << std::endl;
	a = 10;
	std::cout << a << std::endl;
	std::cout << a--.toInt() << std::endl;
	std::cout << a.toInt() << std::endl;
	a = 10;
	std::cout << (--a).toInt() << std::endl;

	std::cout << std::endl;

	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "a: " <<  a << std::endl;
	std::cout << "b: " <<  b << std::endl;

	std::cout << "max, min" << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;

	std::cout << "compare operators" << std::endl;
	Fixed c(a);
	if (b > a && !(a > b))
		std::cout << "> OK" << std::endl;
	if (a < b && !(b < a))
		std::cout << "< OK" << std::endl;
	if (b >= a && !(a >= b) && a >= c && c >= a)
		std::cout << ">= OK" << std::endl;
	if (a <= b && !(b <= a) && a <= c && c <= a)
		std::cout << "<= OK" << std::endl;
	if (a == c && !(a == b))
		std::cout << "== OK" << std::endl;
	if (a != b && !(a != c))
		std::cout << "!= OK" << std::endl;

	std::cout << std::endl;
	a = Fixed(4.2f);
	c = Fixed(0.7f);
	std::cout << "arithmetic operators" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << a + c << std::endl;
	std::cout << a - c << std::endl;
	std::cout << a * c << std::endl;
	std::cout << a / c << std::endl;

	

	return 0;
}
