#include <assert.h>
#include "Test.h"

void test_main() {
	Point a(1, 2), b(3, 4), c(1, -3), d(-2, 4), e(-3, -4);
	Colour s(100, 125, 175, 200), s1(100, 100, 100, 100);

	Circumference cir(c, s, 4);
	Circle circle(cir, s1);

	LineSegment aa(a, b, s), ab(b, c, s), ac(c, d, s), ad(d, a, s);
	vector <LineSegment> t{ aa,ab,ac,ad };
	Quadrilateral quad(t, s1);
	
	cout << "Tests on Colour class" << endl;
	assert(s.get_red() == 100);
	assert(s.get_green() == 125);
	assert(s.get_blue() == 175);
	assert(s.get_transparency() == 200);
	assert(s.is_colour() == true);
	cout << "Passed" << endl << endl;

	cout << "Tests on  Circumference class" << endl;
	assert(cir.get_radius() == 4);
	assert((cir.get_perimeter() > 25) && (cir.get_perimeter() < 26));
	assert((cir.get_square() > 50) && (cir.get_square() < 51));
	cout << "Passed" << endl << endl;

	cout << "Tests on  Quadrilateral class" << endl;
	assert(quad.get_Vector_size() == 4);
	assert((quad.get_area() > 23) && (quad.get_area() < 24));
	assert((quad.get_perimeter() > 21) && (quad.get_perimeter() < 22));
	cout << "Passed" << endl << endl;

}