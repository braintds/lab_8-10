#pragma once
#include "Header.h"
#include "Colour.h"
#include"Point.h"


class Figure
{
private:
	Colour outer_colour;
public:
	Figure(Colour);
	virtual double get_square() = 0;
	virtual double get_perimeter() = 0;
	virtual void move(char a, double k) = 0;
	virtual void rotate(unsigned int arg) = 0;
	virtual void scale(unsigned int arg) = 0;
	Colour get_outer_colour();
	void set_outer_colour(Colour color);
};