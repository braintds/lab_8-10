#include"Point.h"


Point::Point(float x = 0, float y = 0)
	:x{ x }, y{ y }
{
}


float Point::print()
{
	return (x + ' ' + y);
}