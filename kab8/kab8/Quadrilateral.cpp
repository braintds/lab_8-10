#include "Quadrilateral.h"


Quadrilateral::Quadrilateral(vector <LineSegment> a, Color color)
	:a{a}, Color(color)
{
	this->a.reserve(4);
}


int Quadrilateral::get_Vector_size()
{
	return a.size();
}


LineSegment Quadrilateral::get_LineSegment(unsigned int i) const
{
	return a[i];
}


float Quadrilateral::get_perimeter() {

	float perimeter = 0;
	for (unsigned short int i{ 0 }; i < a.size(); i++)
	{
		perimeter += a[i].get_length();
	}
	return perimeter;
}


float Quadrilateral::get_area() {

	float area = 1;
	float half_perimeter = get_perimeter() / 2;

	for (unsigned short int i{ 0 }; i < a.size(); i++)
	{
		area = area * (half_perimeter - a[i].get_length());
	}
	return sqrt(area);
}