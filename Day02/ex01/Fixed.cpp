#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	fixedPoint = 0;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	fixedPoint = (int)(num << bits);
}

Fixed & Fixed::operator= (const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	fixedPoint = fixed.getRawBits();

	return (*this);
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	fixedPoint = (int)roundf(num * (1 << bits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

std::ostream & operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();

	return (out);
}

int		Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
}

int		Fixed::toInt(void) const
{
	return (fixedPoint >> bits);
}
float	Fixed::toFloat(void) const
{
	float ret;

	ret = (float)fixedPoint/(float)(1 << bits);

	return (ret);
}