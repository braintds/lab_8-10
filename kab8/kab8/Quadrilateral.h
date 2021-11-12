#pragma once
#include "LineSegment.h"
#include "Point.h"
#include "Header.h"


class Quadrilateral
{
private:
	vector <LineSegment> a;
	Color color;
public:
	Quadrilateral(vector <LineSegment>, Color );
	Color get_color();
	int get_Vector_size();
	LineSegment get_LineSegment(unsigned int i) const;
	float get_perimeter();
	float get_area();
};