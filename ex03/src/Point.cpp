#include "../inc/Point.hpp"
#include "../inc/Fixed.hpp"
#include <iostream>
#include <cmath>

Point::Point() : _x(0), _y(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float  x, const float y) : _x(x), _y(y)
{
	//std::cout << "Two float numbers constructor called" << std::endl;
}

Point::Point(const Point &fixed) : _x(fixed._x), _y(fixed._y)
{	
	//std::cout << "Copy constructor called" << std::endl;
}

Point& Point::operator=(const Point &fixed)
{	
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
	{
		(Fixed) this->_x = fixed._x.getRawBits();
		(Fixed) this->_y = fixed._y.getRawBits();
	}
	return (*this);
}

Point::~Point()
{
	//std::cout << "Destructor called" << std::endl;
}

float Point::getX() const
{
	return (this->_x.toFloat());
}

float Point::getY() const
{
	return (this->_y.toFloat());
}