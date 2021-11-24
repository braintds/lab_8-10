#pragma once
#include "Point.h"
#include "Header.h"
#include "Colour.h"
#include "Figure.h"


class Quadrilateral : public Figure
{
private:
	vector <Point> a;
	Colour inner_colour;
public:
	Quadrilateral(vector<Point>, Colour, Colour);
	Quadrilateral();
	void move(char a, double k);
	void rotate(unsigned short int arg);
	void scale(unsigned short int arg);
	double get_x();
	double get_y();
	Point get_Points() const;
	double get_perimeter();
	double get_square();
	Colour get_inner_colour();
	void set_inner_colour(Colour color);
};