#include "Circumference.h"


Circumference::Circumference(Point centre, Colour colour, float radius)
	: centre{ centre }, colour{ colour }, radius{ radius }
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