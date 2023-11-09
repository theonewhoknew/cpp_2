#include "../inc/Fixed.hpp"
#include "../inc/Point.hpp"

#include <iostream>

int main( void ) 
{	
	Point blank;
	blank.print();
	Point a(12, 12);
	a.print();
	Point b(2, 1);
	b.print();
	Point c(2, 4);
	c.print();
	Point p(7, 9);
	p.print();

	Point z(c);
	z.print();
	c.print();

	a = b;
	a.print();

	if (bsp(a, b, c, p))
		std::cout << std::boolalpha << true << std::endl;
	else
		std::cout << std::boolalpha << false << std::endl;
}