#include"Circle.h"


Circle::Circle(Circumference circle, Color color)
	:circle{ circle }, color{ color }
{
}


void Circle::set_color()
{
	color.change_param();
}

double Circle::get_x()
{
	return circle.get_x();
}


double Circle::get_y()
{
	return circle.get_y();
}


double Circle::get_rad()
{
	return this->circle.get_rad();
}


double Circle::get_square()
{
	return M_PI * pow(this->circle.get_rad(), 2);
}


double Circle::get_perimeter()
{
	return 2 * M_PI * this->circle.get_rad();
}


void Circle::print()
{
	cout << "circle: ";
	circle.print();
	 
	 //print color ��� ������ 
	cout << "color: "; color.print();
}