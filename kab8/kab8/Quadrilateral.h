#pragma once
#include "Straight.h"
#include "Point.h"
#include "Header.h"


class Quadrilateral
{
private:
	vector <Straight> a; 


public:
	Quadrilateral(vector <Straight> _a, Color _col);
	void change_col();
	void print();
};