#pragma once
#include "Header.h"
#include "Color.h"


class LineSegment : public Color
{
private:
	//Color color;
	Point a, b;
public:
	LineSegment(Point, Point, Color);
	double get_length();
};