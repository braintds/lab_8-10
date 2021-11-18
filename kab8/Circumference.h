#pragma once
#include "Header.h"
#include "Colour.h"
#include "Point.h"
#include "Figure.h"


class Circumference : public Figure
{
private:
	Point centre;
	double radius;
public:
	Circumference(Point, Colour, double);
	double get_radius();
	double get_square();
	double get_perimeter();
};