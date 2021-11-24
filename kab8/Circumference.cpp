#include "Circumference.h"


Circumference::Circumference(Point centre=Point(0,0), Colour outer_colour = Colour(0,0,0,0), double radius = 0)
	:centre{ centre }, Figure(outer_colour), radius{ radius }
{
}


void Circumference::move(char c, double k)
{
	switch (c)
	{
	case 'x':
		centre = Point(k + centre.x, get_y());
		break;
	case 'y':
		set_centre(Point(get_x(), k + get_y()));
		break;
	default:
		cout << "indefinite argument" << endl;
		break;
	}
}


void Circumference::rotate(unsigned short int arg)
{

	switch (arg)
	{
	case 90:
		centre = Point(0 - get_y(), get_x());
		break;
	case 180:
		centre = Point(0 - get_x(), 0 - get_y());
		break;
	case 270:
		centre = Point(get_x(), 0 - get_y());
		break;
	default:
		break;
	}

}

void Circumference::scale(unsigned short int arg)
{
	;
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
