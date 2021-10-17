#pragma once
#include "Header.h"
#include "Color.h"


class Straight
{
private:
	Color color;
	Point a, b;
public:
	Straight(Point, Point, Color);

	void set_color();
	void set_coordin();
	void set_coordin(double _x, double _y);
	bool find_point(Straight _a);
	float get_length();

	void print();
};