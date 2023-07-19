#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private:
	int					_value;
	static const int	_bits = 8;

public:
	Fixed();
	Fixed(Fixed &copy);
	Fixed& operator=(const Fixed &instance);
	virtual ~Fixed();

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif