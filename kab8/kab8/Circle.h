#pragma once
#include "Header.h"
#include "Сircumference.h"


class Circle
{
private:
	Сircumference circle;
	Color color;
public:
	Circle(Сircumference, Color);
	Сircumference get_circumference();
	Color get_color();
	float get_x();
	float get_y();
	float get_rad();
	float get_square();
	float get_perimeter();
};