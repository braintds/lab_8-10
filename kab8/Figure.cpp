#include "Figure.h"


Figure::Figure(Colour colour)
	: colour{ colour }
{
}

Colour Figure::get_colour() {
	return colour;
}