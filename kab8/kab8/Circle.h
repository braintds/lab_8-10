#pragma once
#include "Header.h"
#include "Circumference.h"


class Circle: public Circumference
{
private:
	//Circumference circle;
	Color color;
public:
	Circle(Circumference, Color);
	Color get_color();

};