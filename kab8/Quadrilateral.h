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
	int get_vector_size();
	void move(char a, double k);
	void rotate(unsigned int arg);
	void scale(unsigned int arg);
	double get_x(unsigned int i);
	double get_y(unsigned int i);
	Point get_Points() const;
	double get_perimeter();
	double get_square();
	Colour get_inner_colour();
	void set_inner_colour(Colour color);
};