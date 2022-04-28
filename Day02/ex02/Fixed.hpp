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

	bool operator==(const Fixed &fixed);
	bool operator!=(const Fixed &fixed);
	bool operator>(const Fixed &fixed);
	bool operator<(const Fixed &fixed);
	bool operator>=(const Fixed &fixed);
	bool operator<=(const Fixed &fixed);

	Fixed operator+(const Fixed &fixed);
	Fixed operator-(const Fixed &fixed);
	Fixed operator*(const Fixed &fixed);
	Fixed operator/(const Fixed &fixed);

	Fixed & operator++(void);
	Fixed operator++(int value);
	Fixed & operator--(void);
	Fixed operator--(int value);

	static Fixed & min(Fixed &a, Fixed &b);
	static Fixed min(const Fixed &a, const Fixed &b);
	static Fixed & max(Fixed &a, Fixed &b);
	static Fixed max(const Fixed &a, const Fixed &b);
};
	std::ostream & operator<< (std::ostream &out, const Fixed &fixed);

#endif