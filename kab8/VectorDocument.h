#pragma once
#include "Header.h"
#include "Colour.h"
#include "Figure.h"
#include "Circle.h"
#include "Quadrilateral.h"


class VectorDocument : public Serializable
{
private:
	vector <Circle> circles;
	vector <Quadrilateral> quadrilaterals;
	vector <Circumference> circumferences;
public:
	VectorDocument(vector <Quadrilateral>, vector <Circle>, vector <Circumference>);
	void move(char c, double k);
	void rotate(unsigned int arg);
	void scale(unsigned int arg);
	void add_circle(Circle Circle);
	void add_quadrilateral(Quadrilateral Quadrilateral);
	int get_Quadrilateral_vector_size();
	int get_Circle_vector_size();
	int get_Circumference_vector_size();
	Quadrilateral get_Quadrilateral(unsigned int i);
	Circle get_Circle(unsigned int i);
	Circumference get_Circumference(unsigned int i);

	Document toJSON() override;
	bool fromJSON(const Value& value) override;
};