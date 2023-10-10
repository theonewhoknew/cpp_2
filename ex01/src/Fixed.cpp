#include "../inc/Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{	
	_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
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
	_value = (number << _bits);
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	_value =  roundf(number * ( 1 << _bits ));
}

int Fixed::getRawBits(void) const
{
	return (this->_value);
}

void Fixed::setRawBits(int const raw) 
{
	this->_value = raw;
}

int	Fixed::toInt( void ) const 
{
    return (this->_value >> _bits);
}

float	Fixed::toFloat( void ) const 
{
    return static_cast<float>(this->getRawBits() ) / ( 1 << _bits);
}

std::ostream& operator<<(std::ostream &out, const Fixed &c)
{
    out << c.toFloat();
    return out;
}
