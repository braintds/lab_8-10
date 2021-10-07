#include "Quadrilateral.h"


Quadrilateral::Quadrilateral(vector <Straight> _a, Color _col)
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



