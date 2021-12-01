#pragma once
#include "Header.h"
#include "Colour.h"
#include "Point.h"
#include "Figure.h"


class Circumference : public Figure, public Serializable
{
private:
	Point centre;
	double radius;
public:
	Circumference(Point, Colour, double);

	double get_radius();
	double get_square();
	double get_perimeter();
	double get_x();
	double get_y();
	Point get_centre();

	void move(char c, double k);
	void rotate(unsigned int arg);
	void scale(double arg);
	void set_centre(Point c);

	Document toJSON() override;
	bool fromJSON(const Value& value) override;
};