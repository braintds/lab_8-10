#pragma once
#include "Header.h"
#include "Color.h"
#include"Point.h"


class Circumference
{
private:
	Point centre;
	Color color;
	float radius;
public:
	Circumference(Point, Color, float);
	float get_x();
	float get_y();
	float get_radius();
	void set_color();
	Color get_color();
};