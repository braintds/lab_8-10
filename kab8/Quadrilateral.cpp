#include "Quadrilateral.h"


Quadrilateral::Quadrilateral(vector<Point> a, Colour outer_colour, Colour inner_colour)
	:a{a}, Figure(outer_colour), inner_colour{ inner_colour }
{
	
}


int Quadrilateral::get_Vector_size()
{
	return 0;//arr->size(); WTF
}


Point Quadrilateral::get_Points(unsigned int i) const
{
	return Point(0,0);//*(arr +i); WTF
}


double Quadrilateral::get_perimeter()
{
	double perimeter = 0;
	for (unsigned short int i{ 1 }; i < 5; i++)
	{
		perimeter += sqrt(pow(a[i % 4].x - a[(i - 1) % 4].x, 2.0) + pow(a[i % 4].y - a[(i - 1) % 4].y, 2.0));
	}
	return perimeter;
}


double Quadrilateral::get_square()
{
	double half_perimeter = get_perimeter() / 2;
	double area = 1;

	for (unsigned short int i{ 1 }; i < 5; i++)
	{
		cout << "made an iteration" << endl;
		area = area * (half_perimeter - sqrt(pow(a[i % 4].x - a[(i - 1) % 4].x, 2.0) + pow(a[i % 4].y - a[(i - 1) % 4].y, 2.0)));
	}
	return sqrt(area);
}

Colour Quadrilateral::get_inner_colour() {
	return inner_colour;
}

void Quadrilateral::set_inner_colour(Colour colour) {
	inner_colour = colour;
}