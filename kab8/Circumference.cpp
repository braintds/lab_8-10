#include "Circumference.h"


Circumference::Circumference(Point centre = Point(0, 0), Colour outer_colour = Colour(0, 0, 0, 0), double radius = 0)
	:centre{ centre }, Figure(outer_colour), radius{ radius }
{
}


void Circumference::move(char c, double k)
{
	switch (c)
	{
	case 'x':
		set_centre(Point(k + get_x(), get_y()));
		break;
	case 'y':
		set_centre(Point(get_x(), k + get_y()));
		break;
	default:
		cout << "Incorrect argument. You can choose x or y." << endl;
		break;
	}
}


void Circumference::rotate(unsigned int arg)
{
	;
}


void Circumference::scale(double arg)
{
	if (arg > 0) 
		radius *= arg;
	else {
		cout << "Incorrect argument. Scale coefficent must be greater than 0." << endl;
	}
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


void Circumference::set_centre(Point c)
{
	centre = c;
}


double Circumference::get_x()
{
	return centre.x;
}


double Circumference::get_y()
{
	return centre.y;
}