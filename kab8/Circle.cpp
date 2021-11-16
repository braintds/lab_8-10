#include"Circle.h"


Circle::Circle(Circumference circle, Colour colour)
	:Circumference( circle ), colour{ colour }
{
}

Colour Circle::get_colour()
{
	return colour;
}
