#pragma once
#include "Header.h"
#include "Colour.h"
#include"Point.h"


class Figure
{
private:
	Colour outer_colour;
public:
	Figure(Colour);
	virtual double get_square() = 0;
	virtual double get_perimeter() = 0;
	Colour get_outer_colour();
	void set_outer_colour(Colour color);
};