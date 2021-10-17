#include"Point.h"


Point::Point(double x = 0, double y = 0)
	:x{ x }, y{ y }
{
}

double Point::print()
{
	return (x + ' ' + y);
}
