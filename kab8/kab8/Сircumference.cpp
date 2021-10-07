#include "Ñircumference.h"


Ñircumference::Ñircumference(Point _centre, Color _col, double _rad)
	: centre{ _centre }, color{ _col }, rad{ _rad }
{
}


double Ñircumference::get_x()
{
	return this->centre.x;
}


double  Ñircumference::get_y()
{
	return this->centre.y;
}


double Ñircumference::get_rad()
{
	return this->rad;
}

void Ñircumference::set_color()
{
	color.change_param();
}

Color Ñircumference::get_color()
{
	return color;
}


void Ñircumference::print()
{
	cout << "öåíòð x = " << this->centre.x << ",y = " << this->centre.y << ", Ðàäèóñ = " << rad << endl;
	color.print();

}