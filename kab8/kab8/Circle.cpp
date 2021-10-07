#include"Circle.h"


Circle::Circle(Сircumference _circle, Color _col)
	:circle{ _circle }, color{ _col }
{
}


void Circle::set_color()
{
	color.change_param();
}

double Circle::get_x()
{
	return this->circle.get_x();
}


double Circle::get_y()
{
	return this->circle.get_y();
}


double Circle::get_rad()
{
	return this->circle.get_rad();
}


double Circle::get_square()
{
	return PI * pow(this->circle.get_rad(), 2);
}


double Circle::get_perimeter()
{
	return 2 * PI * this->circle.get_rad();
}


void Circle::print()
{
	cout << "Цвет окружности: ";
	circle.print();
	 
	 //print color для ободка 
	cout << "Цвет заливки: "; color.print();
}