#include"Circle.h"


Circle::Circle(Point centre = Point(0, 0), Colour outer_colour = Colour(0, 0, 0, 0), double radius = 0, Colour inner_colour = Colour(0, 0, 0, 0))
	:inner_colour{ inner_colour }, Circumference(centre, outer_colour, radius)
{
}


/*Circle::Circle()
	: inner_colour{ Colour(0, 0, 0, 0) }, Circumference(Point(0, 0), Colour(0, 0, 0, 0), 0)
{

}*/



void Circle::move(char c, double k)
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
		cout << "indefinite argument" << endl;
		break;
	}
}


void Circle::rotate(unsigned int arg)
{

	switch (arg)
	{
	case 90:
		set_centre(Point(0 - get_y(), get_x()));
		break;
	case 180:
		set_centre(Point(0 - get_x(), 0 - get_y()));
		break;
	case 270:
		set_centre(Point(get_x(), 0 - get_y()));
		break;
	default:
		break;
	}

}

void Circle::scale(unsigned int arg)
{
	;
}


Colour Circle::get_inner_colour() {
	return inner_colour;
}

void Circle::set_inner_colour(Colour colour) {
	inner_colour = colour;
}