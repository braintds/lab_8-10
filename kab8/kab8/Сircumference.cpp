#include "Circumference.h"


Ñircumference::Ñircumference(Point _centre, Color _col, float _rad)
	: centre{ _centre }, color{ _col }, rad{ _rad }
{
}


float Ñircumference::get_x()
{
	return this->centre.x;
}


float  Ñircumference::get_y()
{
	return this->centre.y;
}


float Ñircumference::get_rad()
{
	return this->rad;
}

void Circumference::set_color()
{
	color.change_param();
}

Color Circumference::get_color()
{
	return color;
}