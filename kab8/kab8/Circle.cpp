#include"Circle.h"


Circle::Circle(Ñircumference circle, Color color)
	:circle{ circle }, color{ color }
{
}


Ñircumference Circle::get_circumference() 
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
	return this->circle.get_rad();
}


float Circle::get_square()
{
	return M_PI * pow(this->circle.get_rad(), 2);
}


float Circle::get_perimeter()
{
	return 2 * M_PI * this->circle.get_rad();
}