#ifndef EX03_POINT_HPP
#define EX03_POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const		_x;
		Fixed const		_y;

	public:
		Point();
		Point(Fixed const x, Fixed const y);
		~Point();
		Point(Point const &other);

		Point	&operator =(const Point &other);

		Fixed	Get_x(void) const;
		Fixed	Get_y(void) const;
};


#endif
