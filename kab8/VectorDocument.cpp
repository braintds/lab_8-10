#include"VectorDocument.h"


VectorDocument::VectorDocument(vector <Quadrilateral> quadrilaterals, vector <Circle> circles)
	: quadrilaterals{ quadrilaterals }, circles{ circles }
{

}

void VectorDocument::move(char c, double k)
{
	for (unsigned int i{ 0 }; i < quadrilaterals.size(); i++)
		quadrilaterals[i].move(c, k);
	for (unsigned int i{ 0 }; i < circles.size(); i++)
		circles[i].move(c, k);
}


void VectorDocument::rotate(unsigned short int arg)
{
	for (unsigned int i{ 0 }; i < quadrilaterals.size(); i++)
		quadrilaterals[i].rotate(arg);
	for (unsigned int i{ 0 }; i < circles.size(); i++)
		circles[i].rotate(arg);
}


void VectorDocument::scale(unsigned short int arg)
{
	for (unsigned int i{ 0 }; i < quadrilaterals.size(); i++)
		quadrilaterals[i].scale(arg);
	for (unsigned int i{ 0 }; i < circles.size(); i++)
		circles[i].scale(arg);
}


void VectorDocument::add_circle(Circle Circle)
{
	circles.push_back(Circle);
}


void VectorDocument::add_quadrilateral(Quadrilateral Quadrilateral)
{
	quadrilaterals.push_back(Quadrilateral);
}
