#include "Point.hpp"

Point::Point(void) : x(Fixed()), y(Fixed())
{
}

Point::~Point(void)
{
}

Point::Point(const float a, const float b) : x(a), y(b)
{
}

Point::Point(const Point &copy)
{
	*this = copy;
}

Point & Point::operator=(const Point &other)
{
	const_cast<Fixed&>(x) = other.x;
	const_cast<Fixed&>(y) = other.y;

	return (*this);
}

float	Point::getX(void)
{
	return(x.toFloat());
}

float	Point::getY(void)
{
	return(y.toFloat());
}