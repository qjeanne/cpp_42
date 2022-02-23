#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main()
{
	Point	a(0, 0);
	Point	b(0, 20);
	Point	c(30, 10);
	Point	in(5, 15);
	Point	out(40, 10);

	std::cout << "Point \"in\" (" << in.Get_x() << "; " << in.Get_y() << ")" << std::endl;
	std::cout << "Point \"out\" (" << out.Get_x() << "; " << out.Get_y() << ")" << std::endl;
	if (bsp(a, b, c, in))
		std::cout << "\"in\" is in the triangle" << std::endl;
	else
		std::cout << "\"in\" is out of the triangle" << std::endl;
	if (bsp(a, b, c, out))
		std::cout << "\"out\" is in the triangle" << std::endl;
	else
		std::cout << "\"out\" is out of the triangle" << std::endl;
	return 0;
}
