#include "Quadrilateral.h"


Quadrilateral::Quadrilateral(vector<Point> a, Colour outer_colour = Colour(0, 0, 0, 0), Colour inner_colour = Colour(0, 0, 0, 0))
	:a{ a }, Figure(outer_colour), inner_colour{ inner_colour }
{
}

int Quadrilateral::get_vector_size()
{
	return a.size();
}


void Quadrilateral::move(char c, double k)
{
	switch (c)
	{
	case 'x':
		for (int i{ 0 }; i < 4; i++)
			a[i].x += k;
		break;
	case 'y':
		for (int i{ 0 }; i < 4; i++)
			a[i].y += k;
		break;
	default:
		cout << "Incorrect argument. You can chose x or y." << endl;
		break;
	}
}


void Quadrilateral::rotate(unsigned int arg)
{
	double* tmp = new double;
	switch (arg)
	{
	case 90:


		for (int i{ 0 }; i < 4; i++)
		{
			*tmp = a[i].x;
			a[i].x = 0 - a[i].y;
			a[i].y = *tmp;
		}

		break;
	case 180:
		for (int i{ 0 }; i < 4; i++)
		{
			a[i].x = 0 - a[i].x;
			a[i].y = 0 - a[i].y;
		}
		break;
	case 270:
		for (int i{ 0 }; i < 4; i++)
			a[i].y = 0 - a[i].y;
		break;
	default:
		cout << "Incorrect argument. You can rotate only on 90, 180 or 270 degrees" << endl;
		break;
	}
	delete tmp;
	tmp = nullptr;
}

void Quadrilateral::scale(double arg)
{
	double dx, dy;

	for (int i{ 1 }; i < 4; i++)
	{
		dx = a[i].x - a[0].x;
		dy = a[i].y - a[0].y;

		a[i].x = (a[i].x - dx) * arg + dx;
		a[i].y = (a[i].y - dy) * arg + dy;
	}
}

double Quadrilateral::get_x(unsigned int i)
{
	return a[i].x;
}

double Quadrilateral::get_y(unsigned int i)
{
	return a[i].y;
}


Point Quadrilateral::get_Points() const
{
	return Point(0, 0);
}


double Quadrilateral::get_perimeter()
{
	double perimeter = 0;
	for (unsigned int i{ 1 }; i < 5; i++)
	{
		perimeter += sqrt(pow(a[i % 4].x - a[(i - 1) % 4].x, 2.0) + pow(a[i % 4].y - a[(i - 1) % 4].y, 2.0));
	}
	return perimeter;
}


double Quadrilateral::get_square()
{
	double half_perimeter = get_perimeter() / 2;
	double area = 1;

	for (unsigned int i{ 1 }; i < 5; i++)
	{
		cout << "made an iteration" << endl;
		area = area * (half_perimeter - sqrt(pow(a[i % 4].x - a[(i - 1) % 4].x, 2.0) + pow(a[i % 4].y - a[(i - 1) % 4].y, 2.0)));
	}
	return sqrt(area);
}


Colour Quadrilateral::get_inner_colour()
{
	return inner_colour;
}


void Quadrilateral::set_inner_colour(Colour colour)
{
	inner_colour = colour;
}