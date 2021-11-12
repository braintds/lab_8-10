#include "Circumference.h"


Circumference::Circumference(Point centre, Color color, float radius)
	: centre{ centre }, color{ color }, radius { radius }
{
}


float Circumference::get_x()
{
	return centre.x;
}


float  Circumference::get_y()
{
	return centre.y;
}


float Circumference::get_radius()
{
	return radius;
}


Color Circumference::get_color()
{
	return color;
}