#include "main.h"


void Color_print( Color color) 
{
	cout << color.get_red() << ", " << color.get_green() << ", " << color.get_blue() << ", " << color.get_transparency()<<endl;
}


void Quadrilateral_print( vector <LineSegment> array)
{
	cout << "===Quadrilateral===" << endl;
	for (int i{ 0 }; i < array.size(); i++) 
	{
		cout << "LineSegment number: " << i << endl;
		cout << "Point A: ("<< array[i].get_PointA().x << ":" << array[i].get_PointA().y << ")" << endl;
		cout << "Point B: (" << array[i].get_PointB().x << ":" << array[i].get_PointB().y << ")" << endl;
		Color_print( array[i].get_color());
	}
	
}


void �ircumference_print( �ircumference circumference)
{
	cout << "Centre: (" << circumference.get_x() << ":" << circumference.get_y() << endl;
	cout << "Radius: " << circumference.get_rad() << endl;
	Color_print(circumference.get_color());
}


void Circle_print(Circle circle) 
{
	cout << "===Circle==="<<endl;
	cout << "Circumference" << endl;
	�ircumference_print(circle.get_circumference());
	cout << "fill color" << endl;
	Color_print(circle.get_color());
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Point a(1, 2), b(3, 4), c(1, -3),d(-2,4);
	Color s(235, 235, 235, 265);
	//cout << endl << s.print() << endl<<endl;
	;
	Сircumference cir(c, s, 4);
	Circle circle(cir, s);

	LineSegment aa(a, b, s), ab(b,c,s), ac(c,d,s),ad(d,a,s);
	vector <LineSegment> t{ aa,ab,ac,ad };
	Quadrilateral quad(t, s);
	//cout << "------------------------" << endl;
	//circle.print();
	//cout << "------------------------" << endl;
	//
	//quad.print();
	////quad.change_col();
	//quad.print();
	Quadrilateral_print(t);
	Circle_print(circle);
	return 0;
}