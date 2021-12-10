#include "Figure.h"


Figure::Figure(Colour outer_colour)
	: outer_colour{ outer_colour }
{
}

Colour Figure::get_outer_colour()
{
	return outer_colour;
}

void Figure::set_outer_colour(Colour colour)
{
	outer_colour = colour;
}