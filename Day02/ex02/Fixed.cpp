#include "Fixed.hpp"

Fixed::Fixed(void)
{
	// std::cout << "Default constructor called" << std::endl;
	fixedPoint = 0;
}

Fixed::Fixed(const int num)
{
	// std::cout << "Int constructor called" << std::endl;
	fixedPoint = (int)(num << bits);
}

Fixed & Fixed::operator= (const Fixed &fixed)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	fixedPoint = fixed.getRawBits();

	return (*this);
}

Fixed::Fixed(const float num)
{
	// std::cout << "Float constructor called" << std::endl;
	fixedPoint = (int)roundf(num * (1 << bits));
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	// std::cout << "Copy constructor called" << std::endl;
	fixedPoint = copy.getRawBits();
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

bool Fixed::operator!=(const Fixed &fixed)
{
	return(this->fixedPoint != fixed.fixedPoint);
}

bool Fixed::operator==(const Fixed &fixed)
{
	return(this->fixedPoint == fixed.fixedPoint);
}

bool Fixed::operator<(const Fixed &fixed)
{
	return(this->fixedPoint < fixed.fixedPoint);
}

bool Fixed::operator>(const Fixed &fixed)
{
	return(this->fixedPoint > fixed.fixedPoint);
}

bool Fixed::operator>=(const Fixed &fixed)
{
	return(this->fixedPoint >= fixed.fixedPoint);
}

bool Fixed::operator<=(const Fixed &fixed)
{
	return(this->fixedPoint <= fixed.fixedPoint);
}

Fixed Fixed::operator+(const Fixed &fixed)
{
	Fixed	tmp;

	tmp.fixedPoint = this->fixedPoint + fixed.fixedPoint;
	return (tmp);
}
Fixed Fixed::operator-(const Fixed &fixed)
{
	Fixed	tmp;

	tmp.fixedPoint = this->fixedPoint - fixed.fixedPoint;
	return (tmp);
}
Fixed Fixed::operator*(const Fixed &fixed)
{
	Fixed	tmp;

	tmp.fixedPoint = (this->fixedPoint * fixed.fixedPoint) >> bits;
	return (tmp);
}
Fixed Fixed::operator/(const Fixed &fixed)
{
	Fixed	tmp;

	if (!fixed.fixedPoint){
		std::cout << "Don't divide to 0" <<std::endl;
		return(Fixed(0));
	}

	tmp.fixedPoint = (this->fixedPoint / fixed.fixedPoint) << bits;
	return (tmp);
}

Fixed & Fixed::operator++(void)
{
	fixedPoint++;
	return (*this);
}

Fixed Fixed::operator++(int value)
{
	Fixed tmp(*this);

	fixedPoint++;
	value = 0;

	return (tmp);
}

Fixed & Fixed::operator--(void)
{
	fixedPoint--;
	return (*this);
}

Fixed Fixed::operator--(int value)
{
	Fixed tmp(*this);

	fixedPoint--;
	value = 0;

	return (tmp);
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return(a);
	return (b);
}

Fixed Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return(a);
	return (b);
}

Fixed Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}