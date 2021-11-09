#include "Quadrilateral.h"


Quadrilateral::Quadrilateral(vector <LineSegment> _a, Color _col)
	:a{ _a }
{
	a.reserve(4);
}

void Quadrilateral::change_col()
{
	for (unsigned short int i{ 0 }; i < a.size(); i++)
	{
		cout << "----------прямая " << i + 1 << "----------" << endl;
		a[i].set_color();
	}
}

void Quadrilateral::print()
{
	cout << "==четырехугольник==" << endl;
	for (unsigned short int i{ 0 }; i < a.size(); i++) 
	{
		cout << "----------прямая " << i + 1 << "----------" << endl; a[i].print();
	}
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
		area = area * ( half_perimeter - a[i].get_length() );
	}
	return sqrt(area);
}


