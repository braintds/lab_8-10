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
	Colour get_inner_colour();
	void set_inner_colour(Colour color);

	Document toJSON() override;
	bool fromJSON(const Value& value) override;
};