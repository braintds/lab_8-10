#include"Circle.h"


Circle::Circle(Point centre, Colour outer_colour, double radius, Colour inner_colour)
	:inner_colour{ inner_colour }, Circumference(centre, outer_colour, radius)
{
}

Colour Circle::get_inner_colour() {
	return inner_colour;
}

void Circle::set_inner_colour(Colour colour) {
	inner_colour = colour;
}