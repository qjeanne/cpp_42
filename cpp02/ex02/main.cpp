#include <iostream>
#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << std::endl;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << std::endl;

	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << std::endl;

	Fixed x(5);
	Fixed y(2);
	std::cout << std::endl;

	std::cout << x << " / " << y << "\n" << x / y << std::endl;
	std::cout << std::endl;

	bool c = x > y;
	std::cout << c << std::endl;
	std::cout << std::endl;

	return 0;
}
