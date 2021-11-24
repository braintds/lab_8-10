#pragma once
#include "Header.h"
#include "Colour.h"
#include "Figure.h"
#include "Circle.h"
#include "Quadrilateral.h"


class VectorDocument :public Circle, public Quadrilateral
{
private:
	vector <Circle> circles;
	vector <Quadrilateral> quadrilaterals;
public:
	VectorDocument(vector <Quadrilateral>, vector <Circle>);
	void move(char c, double k);
	void rotate(unsigned short int arg);
	void scale(unsigned short int arg);
	void add_circle(Circle Circle);
	void add_quadrilateral(Quadrilateral Quadrilateral);
};