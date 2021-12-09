#pragma once
#include "Point.h"
#include "Header.h"
#include "Colour.h"
#include "Figure.h"


class Quadrilateral : public Figure, public Serializable
{
private:
	vector <Point> a;
	Colour inner_colour;
public:
	Quadrilateral(vector<Point>, Colour, Colour);
	int get_vector_size();
	void move(char a, double k);
	void rotate(unsigned int arg);
	void scale(double arg);
	double get_x(unsigned int i);
	double get_y(unsigned int i);
	double get_perimeter();
	double get_square();
	Colour get_inner_colour();
	void set_inner_colour(Colour color);

	Document toJSON() override;
	bool fromJSON(const Value& value) override;
};