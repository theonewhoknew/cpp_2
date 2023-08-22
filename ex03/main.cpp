#include "Fixed.hpp"
#include "Point.hpp"

#include <iostream>

int main( void ) 
{	
	Point a(7, 7);
	Point b(11, 1);
	Point c(2, 2);
	Point p(7, 3);
	
	if (bsp(a, b, c, p))
		std::cout << std::boolalpha << true << std::endl;
	else
		std::cout << std::boolalpha << false << std::endl;
}