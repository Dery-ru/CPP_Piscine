#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int	fixedPoint;
	static const int bits = 8;
public:
	Fixed(void);
	Fixed(const int num);
	Fixed(const float num);
	~Fixed(void);
	Fixed & operator= (const Fixed &fixed);
	Fixed(const Fixed &copy);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat( void ) const;
	int		toInt( void ) const;
	
};
	std::ostream & operator<< (std::ostream &out, const Fixed &fixed);

#endif