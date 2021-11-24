#include "LineSegment.h"
#include"Point.h"

LineSegment::LineSegment(Point a, Point b, Colour colour)
	: a{ a }, b{ b }, colour{ colour }
{
}


double LineSegment::get_length()
{

	double length = sqrt(pow(Point(b).x - Point(a).x, 2.0) + pow(Point(b).y - Point(a).y, 2.0));
	return length;
}