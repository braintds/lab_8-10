#pragma once
#include "LineSegment.h"
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
	//Quadrilateral(LineSegment* a, Colour colour());
	int get_Vector_size();
	Point get_Points(unsigned int i) const;
	double get_perimeter();
	double get_square();
	Colour get_inner_colour();
	void set_inner_colour(Colour color);
};