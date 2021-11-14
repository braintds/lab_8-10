#include "Circumference.h"


Circumference::Circumference(Point centre, Color color, float radius)
	: centre{ centre }, Color(color), radius{radius}
{
}


float Circumference::get_radius()
{
	return radius;
}


float Circumference::get_square()
{
	return M_PI * pow(get_radius(), 2);
}


float Circumference::get_perimeter()
{
	return 2 * M_PI * get_radius();
}