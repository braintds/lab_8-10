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
	Point get_PointA();
	Point get_PointB();
	float get_length();
	Color get_color();
};