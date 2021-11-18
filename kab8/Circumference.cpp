#include "Circumference.h"


Circumference::Circumference(Point centre, Colour outer_colour, double radius)
	:centre{ centre }, Figure(outer_colour), radius{ radius }
{
}


double Circumference::get_radius()
{
	return radius;
}


double Circumference::get_square()
{
	return M_PI * pow(get_radius(), 2);
}


double Circumference::get_perimeter()
{
	return 2 * M_PI * get_radius();
}