#include "../inc/Fixed.hpp"

#include <iostream>

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	if (a < b)
		std::cout << "a is less than b!" << std::endl;
	if (a == 0.007f)
		std::cout << "yay!" << std::endl;
	if (b != 15)
		std::cout << "b is not 10" << std::endl;
	a = Fixed(5.5f);
	Fixed c;
	c = Fixed( 7 );
	std::cout << a + c << std::endl;
	std::cout << a / 0 << std::endl;
	std::cout << Fixed::min( a, c ) << std::endl;

}