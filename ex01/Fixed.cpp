#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &fixed)
{	
	std::cout << "Copy constructor called" << std::endl;
	_value = fixed.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &fixed)
{	
	std::cout << "Copy assignment operator called" << std::endl;
	_value = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	_value = number;
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	_value = number;
}

int Fixed::getRawBits(void) const
{
	return (this->_value);
}

void Fixed::setRawBits(int const raw) 
{
	this->_value = raw;
}

std::ostream& operator<<(std::ostream &out, const Fixed &c)
{
    out << c.getRawBits();
    return out;
}