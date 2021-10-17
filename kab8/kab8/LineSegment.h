#pragma once
#include "Header.h"
#include "Color.h"


class LineSegment
{
private:
	Color color;
	Point a, b;
public:
	LineSegment(Point, Point, Color);

	void set_color();
	double get_length();
	void print();
};