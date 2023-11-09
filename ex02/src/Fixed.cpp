#include "../inc/Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{	
	_value = 0;
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{	
	//std::cout << "Copy constructor called" << std::endl;
	_value = copy.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &copy)
{	
	//std::cout << "Copy assignment operator called" << std::endl;
	_value = copy.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int number)
{
	//std::cout << "Int constructor called" << std::endl;
	_value = (number << _bits);
}

Fixed::Fixed(const float number)
{
	//std::cout << "Float constructor called" << std::endl;
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

/*comparison*/

bool Fixed::operator>(const Fixed &number) const
{
	return (this->_value > number.getRawBits());
}

bool Fixed::operator<(const Fixed &number) const
{
	return (this->_value < number.getRawBits());
}

bool Fixed::operator>=(const Fixed &number) const
{
	return (this->_value >= number.getRawBits());
}

bool Fixed::operator<=(const Fixed &number) const
{
	return (this->_value <= number.getRawBits());
}

bool Fixed::operator!=(const Fixed &number) const
{
	return (this->_value != number.getRawBits());
}

bool Fixed::operator==(const Fixed &number) const
{
	return (this->_value == number.getRawBits());
}

/*arithmetic*/

Fixed Fixed::operator+(const Fixed &number) const
{
	return Fixed(this->toFloat() + number.toFloat());
}

Fixed Fixed::operator-(const Fixed &number) const
{
	return Fixed(this->toFloat() - number.toFloat());
}

Fixed Fixed::operator*(const Fixed &number) const
{
	return Fixed(this->toFloat() * number.toFloat());
}

Fixed Fixed::operator/(const Fixed &number) const
{
	return Fixed(this->toFloat() / number.toFloat());
}

/*increment decrement*/

Fixed& Fixed::operator++( void )
{
	++this->_value;
	return (*this);
}

Fixed& Fixed::operator--( void )
{
	--this->_value;
	return (*this);
}

Fixed Fixed::operator++( int )
{	
	Fixed tmp = *this;
	tmp._value = this->_value++;
	return (tmp);
}

Fixed Fixed::operator--( int )
{	
	Fixed tmp = *this;
	tmp._value = this->_value++;
	return (tmp);
}

/*min - max*/

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}