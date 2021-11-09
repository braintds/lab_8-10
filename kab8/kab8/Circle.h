#pragma once
#include "Header.h"
#include "Ñircumference.h"


class Circle
{
private:
	Ñircumference circle;
	Color color;
public:
	Circle(Ñircumference, Color);
	Ñircumference get_circumference();
	Color get_color();
	float get_x();
	float get_y();
	float get_rad();
	float get_square();
	float get_perimeter();
};