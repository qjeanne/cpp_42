#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	int 	cross_count;
	Fixed	check_x;

	cross_count = 0;
	if ((a.Get_y() > point.Get_y()) != (b.Get_y() > point.Get_y()))
	{
		check_x = (b.Get_x() - a.Get_x()) * (point.Get_y() - a.Get_y()) / (b.Get_y() - a.Get_y()) + a.Get_x();
		if (point.Get_x() < check_x)
			cross_count++;
	}
	if ((b.Get_y() > point.Get_y()) != (c.Get_y() > point.Get_y()))
	{
		check_x = (c.Get_x() - b.Get_x()) * (point.Get_y() - b.Get_y()) / (c.Get_y() - b.Get_y()) + b.Get_x();
		if (point.Get_x() < check_x)
			cross_count++;
	}
	if ((c.Get_y() > point.Get_y()) != (a.Get_y() > point.Get_y()))
	{
		check_x = (a.Get_x() - c.Get_x()) * (point.Get_y() - c.Get_y()) / (a.Get_y() - c.Get_y()) + c.Get_x();
		if (point.Get_x() < check_x)
			cross_count++;
	}
	return (cross_count % 2 == 1);
}
