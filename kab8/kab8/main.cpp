#include "main.h"


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Point a(1, 2), b(3, 4), c(1, -3),d(-2,4);
	Color s(235, 1, 1, 1);

	Ñircumference cir(c, s, 4);
	Circle circle(cir, s);

	LineSegment aa(a, b, s), ab(b,c,s), ac(c,d,s),ad(d,a,s);
	vector <LineSegment> t{ aa,ab,ac,ad };
	Quadrilateral quad(t, s);
	cout << "------------------------" << endl;
	circle.print();
	cout << "------------------------" << endl;
	quad.print();
	quad.change_col();
	quad.print();
	return 0;
}