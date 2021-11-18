#pragma once
#include "Header.h"
#include "Colour.h"
#include"Point.h"


class Figure
{
private:
	Colour colour;
public:
	Figure(Colour);
	virtual float get_square();
	virtual float get_perimeter();
	Colour get_colour();
};
