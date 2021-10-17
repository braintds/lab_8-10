#pragma once
#include "LineSegment.h"
#include "Point.h"
#include "Header.h"


class Quadrilateral
{
private:
	vector <LineSegment> a; 


public:
	Quadrilateral(vector <LineSegment> _a, Color _col);
	void change_col();
	void print();
	float get_perimeter();
	float get_area();
};