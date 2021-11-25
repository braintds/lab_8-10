#pragma once
#include "Header.h"
#include "Colour.h"
#include "Point.h"
#include "Figure.h"


class Circumference : public Figure
{
private:
	Point centre;
	double radius;
public:
	Circumference(Point, Colour, double);
	double get_radius();
	double get_square();
	double get_perimeter();
	void move(char c, double k);
	void rotate(unsigned int arg);
	void scale(unsigned int arg);
	void set_centre(Point c);
	double get_x();
	double get_y();
};