#include "Straight.h"
#include"Point.h"

Straight::Straight(Point _a, Point _b, Color _col)
	:a{ _a }, b{ _b }, color{ _col }
{
}





void Straight::set_color()
{
	color.change_param();
}


void Straight::set_coordin()
{
	double _x, _y;

	cout << "¬ведите новые координаты дл€ точки а(x,y): "; cin >> _x >> _y;
	a.set(_x, _y);
	Point c(_x, _y);
	
	cout << "¬ведите новые координаты дл€ точки b(x,y): "; cin >> _x >> _y;
	b.set(_x, _y);
}


void Straight::set_coordin(double _x, double _y)
{
	a.set(_x, _y);
	b.set(_x, _y);
}


bool Straight::find_point(Straight _a)
{
	if ((a.x == _a.a.x) || (a.y == _a.a.y) || (b.x == _a.b.x) || (a.y == _a.b.y))
		return true;
}


void Straight::print()
{
	cout << "A" << endl;
	this->a.print();
	cout << "B" << endl;
	this->b.print();
	cout << "÷вет: ";
	color.print();
}



//void straight::set_color()
//{
//	string _col;
//	cout << "введите цвет(ffffffff): ";
//	cin >> _col;
//	this->color = _col;
//}
//
//
//void straight::set_coordin()
//{
//	double x, y;
//
//	cout << "введите х1 и у1: ";
//	cin >> x >> y;
//
//	this->x1 = x; this->y1 = y;
//
//	cout << "введите х2 и у2: ";
//	cin >> x >> y;
//
//	this->x2 = x; this->y2 = y;
//}
//
//
//void straight::print()
//{
//	cout << "x1: " << this->x1 << endl;
//	cout << "y1: " << this->y1 << endl;
//	cout << "x2: " << this->x2 << endl;
//	cout << "y2: " << this->y2 << endl;
//	cout << "color rgb: " << this->color << endl;
//}