#pragma once
#include "Header.h"
#include "Ñircumference.h"


class Circle
{
private:
	Ñircumference circle;
	Color color;
public:
	Circle(Ñircumference, Color);
	void set_color();
	double get_x();
	double get_y();
	double get_rad();
	double get_square();
	double get_perimeter();
	void print();

};