#include"Circle.h"


Circle::Circle(Point centre = Point(0, 0), Colour outer_colour = Colour(0, 0, 0, 0), double radius = 0, Colour inner_colour = Colour(0, 0, 0, 0))
	:inner_colour{ inner_colour }, Circumference(centre, outer_colour, radius)
{
}


/*Circle::Circle()
	: inner_colour{ Colour(0, 0, 0, 0) }, Circumference(Point(0, 0), Colour(0, 0, 0, 0), 0)
{

}*/


Colour Circle::get_inner_colour() {
	return inner_colour;
}

void Circle::set_inner_colour(Colour colour) {
	inner_colour = colour;
}