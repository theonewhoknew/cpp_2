#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed
{
private:
	int					_value;
	static const int	_bits = 8;

public:
	Fixed();
	Fixed(Fixed &copy);
	Fixed(const int number);
	Fixed(const float number);
	Fixed& operator=(const Fixed &instance);
	virtual ~Fixed();

	int getRawBits( void ) const;
	void setRawBits( int const raw );

};

std::ostream& operator<<(std::ostream &out, const Fixed &c);

#endif