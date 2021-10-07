#pragma once
#include "Header.h"
#include "Đircumference.h"


class Circle
{
private:
	Đircumference circle;
	Color color;
public:
	Circle(Đircumference, Color);
	void set_color();
	double get_x();
	double get_y();
	double get_rad();
	double get_square();
	double get_perimeter();
	void print();

};