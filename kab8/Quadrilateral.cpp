#include "Quadrilateral.h"


Quadrilateral::Quadrilateral(vector<LineSegment> a, Colour colour)
	:a{a}, inner_colour{ colour }
{
	
}


int Quadrilateral::get_Vector_size()
{
	return arr->size();
}


LineSegment Quadrilateral::get_LineSegment(unsigned int i) const
{
	return *(arr +i);
}


float Quadrilateral::get_perimeter() 
{
	float perimeter = 0;
	for (unsigned short int i{ 0 }; i < 4; i++)
	{
		perimeter += arr[i]->get_length();
	}
	return perimeter;
}


float Quadrilateral::get_area() 
{
	float area = 1;
	float half_perimeter = get_perimeter() / 2;

	for (unsigned short int i{ 0 }; i < 4; i++)
	{
		area = area * (half_perimeter - a[i].get_length());
	}
	return sqrt(area);
}

Colour Quadrilateral::get_inner_colour() {
	return inner_colour;
}

void Quadrilateral::set_inner_colour(Colour colour) {
	inner_colour = colour;
}