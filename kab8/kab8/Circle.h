#pragma once
#include "Header.h"
#include "Circumference.h"


class Circle
{
private:
	Circumference circle;
	Color color;
public:
	Circle(Circumference, Color);
	Circumference get_circumference();
	Color get_color();
	float get_x();
	float get_y();
	float get_rad();
	float get_square();
	float get_perimeter();
};