#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>
#include <cmath>

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	const Point vector_ap(point.getX() - a.getX(), point.getY() - a.getY());
	const Point vector_bp(point.getX() - b.getX(), point.getY() - b.getY());
	const Point vector_cp(point.getX() - c.getX(), point.getY() - c.getY());

	std::cout << vector_ap.getX() << std::endl;
	std::cout << vector_ap.getY() << std::endl;

	return (true);
}