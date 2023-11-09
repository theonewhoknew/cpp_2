#ifndef POINT_HPP
# define POINT_HPP
# include <iostream>
# include "Fixed.hpp"

class Point
{
private:
	const Fixed	_x;
	const Fixed _y;

public:

	Point();
	Point(const float x, const float y);
	Point(const Point &copy);
	Point& operator=(const Point &copy);
	~Point();

	float getX(void) const;
	float getY(void) const;
	void print();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif