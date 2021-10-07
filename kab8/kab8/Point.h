#pragma once
#include "Header.h"


struct Point
{
	double x, y;

	Point(double, double);
	bool operator == (Point t);
	Point operator = (Point t);
	void set(double _x, double _y);
	double get_x();
	double get_y();
	void print();

};