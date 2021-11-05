#include "Circumference.h"


Circumference::Circumference(Point _centre, Color _col, double _rad)
	: centre{ _centre }, color{ _col }, rad{ _rad }
{
}


double Circumference::get_x()
{
	return this->centre.x;
}


double  Circumference::get_y()
{
	return this->centre.y;
}


double Circumference::get_rad()
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


void Circumference::print()
{
	cout << "centre x = " << this->centre.x << ",y = " << this->centre.y << ", rad = " << rad << endl;
	color.print();

}