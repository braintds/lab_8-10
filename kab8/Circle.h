#pragma once
#include "Header.h"
#include "Circumference.h"


class Circle: public Circumference
{
private:
	//Circumference circle;
	Colour colour;
public:
	Circle(Circumference, Colour);
	Colour get_colour();

};