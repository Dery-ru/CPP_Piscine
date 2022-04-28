#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	const Fixed x;
	const Fixed y;

public:
	Point(void);
	Point(const float a, const float b);
	~Point(void);
	Point(const Point &copy);

	float	getX(void);
	float	getY(void);
	Point & operator=(const Point &other);
	
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);


#endif