#include "../inc/Point.hpp"
#include "../inc/Fixed.hpp"
#include <iostream>
#include <cmath>

Point::Point() : _x(), _y()
{
	//std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float  x, const float y) : _x(x), _y(y)
{
	//std::cout << "Two float numbers constructor called" << std::endl;
}

Point::Point(const Point &copy) : _x(copy._x), _y(copy._y)
{	
	//std::cout << "Copy constructor called" << std::endl;
}

Point& Point::operator=(const Point &copy)
{	
	//std::cout << "Copy assignment operator called" << std::endl;
	(Fixed) this->_x = copy.getX();
	(Fixed) this->_y = copy.getY();
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

void Point::print()
{
	std::cout << "x es " << this->getX() << " and y es " << this->getY() << std::endl;
}