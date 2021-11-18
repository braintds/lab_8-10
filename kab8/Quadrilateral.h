#pragma once
#include "LineSegment.h"
#include "Point.h"
#include "Header.h"


class Quadrilateral : public LineSegment
{
private:
	vector <LineSegment> a;
public:
	Quadrilateral(vector<LineSegment>, Colour);
	//Quadrilateral(LineSegment* a, Colour colour());
	int get_Vector_size();
	LineSegment get_LineSegment(unsigned int i) const;
	float get_perimeter();
	float get_area();
};