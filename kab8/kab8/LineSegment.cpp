#include "LineSegment.h"
#include"Point.h"

LineSegment::LineSegment(Point a, Point b, Color color)
	:a{ a }, b{ b }, color{ color }
{
}


Point LineSegment::get_PointA()
{
	return a;
}


Point LineSegment::get_PointB()
{
	return b;
}


float LineSegment::get_length() {
	
	float length = sqrt(pow(b.x - a.x, 2.0) + pow(b.y - a.y, 2.0));
	return length;
}


Color LineSegment::get_color() 
{
	return color;
}