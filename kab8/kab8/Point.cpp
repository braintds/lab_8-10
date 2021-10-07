#include"Point.h"


Point::Point(double _x = 0, double _y = 0)
	:x{ _x }, y{ _y }
{
}


bool Point::operator == (Point t) 
{
	return ((x == t.x) && (y == t.y));
}


Point Point::operator = (Point t)
{
	x = t.x;
	y = t.y;
	return (*this);
}


void Point::set(double _x, double _y)
{
	this->x = _x;
	this->y = _y;
}


double Point::get_x()
{
	return this->x;
}


double Point::get_y()
{
	return this->y;
}


void Point::print()
{
	cout << "Точка\nx: " << this->x << " y: " << this->y << endl;
}