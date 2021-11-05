#pragma once
#include "Header.h"
#include "Сircumference.h"


class Circle
{
private:
	Сircumference circle;
	Color color;
public:
	Circle(Сircumference, Color);
	void set_color();
	double get_x();
	double get_y();
	double get_rad();
	double get_square();
	double get_perimeter();
	void print();

};