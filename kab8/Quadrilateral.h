#pragma once
#include "LineSegment.h"
#include "Point.h"
#include "Header.h"


class Quadrilateral : public LineSegment
{
private:
	vector <LineSegment> a;
	Colour inner_colour
public:
	Quadrilateral(vector<LineSegment>, Colour);
	//Quadrilateral(LineSegment* a, Colour colour());
	int get_Vector_size();
	LineSegment get_LineSegment(unsigned int i) const;
	float get_perimeter();
	float get_area();
	Colour get_inner_colour();
	void set_inner_colour(Colour color);
};