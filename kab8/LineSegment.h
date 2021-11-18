#pragma once
#include "Header.h"
#include "Colour.h"


class LineSegment 
{
private:
	Colour colour;
	Point a, b;
public:
	LineSegment(Point, Point, Colour);
	double get_length();
};