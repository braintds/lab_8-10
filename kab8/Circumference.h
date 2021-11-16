#pragma once
#include "Header.h"
#include "Colour.h"
#include"Point.h"


class Circumference : public Colour
{
private:
	Point centre;
	float radius;
public:
	Circumference(Point, Colour, float);
	float get_radius();
	float get_square();
	float get_perimeter();
};