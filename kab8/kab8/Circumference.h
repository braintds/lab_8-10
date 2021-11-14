#pragma once
#include "Header.h"
#include "Color.h"
#include"Point.h"


class Circumference : public Color
{
private:
	Point centre;
	float radius;
public:
	Circumference(Point, Color, float);
	float get_radius();
	float get_square();
	float get_perimeter();
};