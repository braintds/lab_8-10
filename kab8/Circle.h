#pragma once
#include "Header.h"
#include "Circumference.h"
#include "Colour.h"

class Circle : public Circumference
{
private:
	Colour inner_colour;
public:
	Circle(Point, Colour, double, Colour);
	//Circle();
	Colour get_inner_colour();
	void move(char c, double k);
	void rotate(unsigned int arg);
	void scale(unsigned int arg);
	void set_inner_colour(Colour color);
};