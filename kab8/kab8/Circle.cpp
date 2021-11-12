#include"Circle.h"


Circle::Circle(Circumference circle, Color color)
	:circle{ circle }, color{ color }
{
}


Circumference Circle::get_circumference()
{
	return circle;
}


Color Circle::get_color()
{
	return color;
}


float Circle::get_x()
{
	return circle.get_x();
}


float Circle::get_y()
{
	return circle.get_y();
}


float Circle::get_rad()
{
	return circle.get_radius();
}


float Circle::get_square()
{
	return M_PI * pow(circle.get_radius(), 2);
}


float Circle::get_perimeter()
{
	return 2 * M_PI * circle.get_radius();
}