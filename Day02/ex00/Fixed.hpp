#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int	fixedPoint;
	static const int bits = 8;
public:
	Fixed(void);
	~Fixed(void);
	Fixed(const Fixed &copy);
	Fixed & operator= (const Fixed &fixed); 

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif