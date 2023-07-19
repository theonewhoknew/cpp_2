#include "Fixed.hpp"

#include <iostream>

int main( void ) 
{
	Fixed a;
	Fixed const b(10);

	std::cout << "b is " << b << std::endl;
	
	return (0);
}