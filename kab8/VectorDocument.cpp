#include"VectorDocument.h"


VectorDocument::VectorDocument(vector <Quadrilateral> quadrilaterals, vector <Circle> circles, vector <Circumference> circumferences)
	: quadrilaterals{ quadrilaterals }, circles{ circles }, circumferences{ circumferences }
{

}


void VectorDocument::move(char c, double k)
{
	for (unsigned int i{ 0 }; i < quadrilaterals.size(); i++)
		quadrilaterals[i].move(c, k);
	for (unsigned int i{ 0 }; i < circles.size(); i++)
		circles[i].move(c, k);
	for (unsigned int i{ 0 }; i < circumferences.size(); i++)
		circumferences[i].move(c, k);
}


void VectorDocument::rotate(unsigned int arg)
{
	for (unsigned int i{ 0 }; i < quadrilaterals.size(); i++)
		quadrilaterals[i].rotate(arg);
	for (unsigned int i{ 0 }; i < circles.size(); i++)
		circles[i].rotate(arg);
	for (unsigned int i{ 0 }; i < circumferences.size(); i++)
		circumferences[i].rotate(arg);
}


void VectorDocument::scale(unsigned int arg)
{
	for (unsigned int i{ 0 }; i < quadrilaterals.size(); i++)
		quadrilaterals[i].scale(arg);
	for (unsigned int i{ 0 }; i < circles.size(); i++)
		circles[i].scale(arg);
	for (unsigned int i{ 0 }; i < circumferences.size(); i++)
		circumferences[i].scale(arg);
}


void VectorDocument::add_circle(Circle Circle)
{
	circles.push_back(Circle);
}


void VectorDocument::add_quadrilateral(Quadrilateral Quadrilateral)
{
	quadrilaterals.push_back(Quadrilateral);
}


int VectorDocument::get_Quadrilateral_vector_size()
{
	return quadrilaterals.size();
}


int VectorDocument::get_Circle_vector_size()
{
	return circles.size();
}


int VectorDocument::get_Circumference_vector_size()
{
	return circumferences.size();
}


Quadrilateral VectorDocument::get_Quadrilateral(unsigned int i)
{
	return quadrilaterals[i];
}


Circle VectorDocument::get_Circle(unsigned int i)
{
	return circles[i];
}


Circumference VectorDocument::get_Circumference(unsigned int i)
{
	return circumferences[i];
}