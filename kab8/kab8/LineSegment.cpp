#include "LineSegment.h"
#include"Point.h"

LineSegment::LineSegment(Point a, Point b, Color color)
	:a{ a }, b{ b }, color{ color }
{
}


void LineSegment::set_color()
{
	color.change_param();
}


double LineSegment::get_length() {
	
	double length = sqrt(pow(b.x - a.x, 2.0) + pow(b.y - a.y, 2.0));
	return length;
}


void LineSegment::print()
{
	cout << "A" << endl;
	this->a.print();
	cout << "B" << endl;
	this->b.print();
	cout << "Цвет: ";
	color.print();
}