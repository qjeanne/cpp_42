#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y)
{
}

Point::~Point()
{
}

Point::Point(Point const &other) : _x(other._x), _y(other._y)
{
}

Point	&Point::operator =(__unused const Point &other)
{
	return (*this);
}

Fixed	Point::Get_x(void) const
{
	return (this->_x);
}

Fixed	Point::Get_y(void) const
{
	return (this->_y);
}
