#include <assert.h>
#include "Test.h"


string toStringJSON(const Document& d) {
	StringBuffer buffer;
	Writer<StringBuffer> writer(buffer);
	d.Accept(writer);
	return buffer.GetString();
}


void test_main() {
	Point a(1, 2), b(3, 4), c(1, -3), d(-2, 4), e(-3, -4);
	Colour s(100, 125, 175, 200), s1(100, 100, 100, 100);

	Circumference cir(c, s, 4);
	Circle circle(c, s, 4, s1), circle2(e, s1, 5, s);;

	vector <Point> t{ a, b, c, d }, tt{ a,b,c,e };
	Quadrilateral quad(t, s1, s), quad1(t, s1, s);

	vector <Quadrilateral> qs{ quad,quad1 };
	vector <Circumference> cs{ cir };
	vector <Circle> crc{ circle, circle2 };

	VectorDocument VectorDoc(qs, crc, cs);

	cout << "Tests on Colour class" << endl;
	assert(s.get_red() == 100);
	assert(s.get_green() == 125);
	assert(s.get_blue() == 175);
	assert(s.get_transparency() == 200);
	assert(s.is_colour() == true);
	assert(toStringJSON(s.toJSON()) == "{\"type\":\"Colour\",\"red\":100,\"green\":125,\"blue\":175,\"transparency\":200}");
	cout << "Passed" << endl << endl;


	cout << "Tests on  Circumference class" << endl;
	assert(cir.get_radius() == 4);
	assert((cir.get_perimeter() > 25) && (cir.get_perimeter() < 26));
	assert((cir.get_square() > 50) && (cir.get_square() < 51));
	cir.move('x', 2);
	cir.move('y', 4);
	assert((cir.get_x() == 3) && (cir.get_y() == 1));
	cir.scale(2);
	assert(cir.get_radius() == 8);
	assert(toStringJSON(cir.toJSON()) == "{\"type\":\"Circumference\",\"centre_x\":3.0,\"centre_y\":1.0,\"radius\":8.0,\"outer_red\":100,\"outer_green\":125,\"outer_blue\":175,\"outer_transparency\":200}");
	cout << "Passed" << endl << endl;

	cout << "Tests on  Quadrilateral class" << endl;
	assert((quad.get_square() > 23) && (quad.get_square() < 24));
	assert((quad.get_perimeter() > 21) && (quad.get_perimeter() < 22));
	quad.move('x', 3);
	quad.move('y', 4);
	assert((quad.get_Points()[0].x == 4) && (quad.get_Points()[0].y == 6));
	quad.scale(2);
	assert((quad.get_Points()[1].x == 10) && (quad.get_Points()[1].y == 14));
	quad.rotate(90);
	assert((quad.get_Points()[1].x == -14) && (quad.get_Points()[1].y == 10));
	assert(toStringJSON(quad.toJSON()) == "{\"type\":\"Quadrilateral\",\"x1\":-6.0,\"y1\":4.0,\"x2\":-14.0,\"y2\":10.0,\"x3\":-7.0,\"y3\":8.0,\"x4\":-14.0,\"y4\":5.0,\"outer_red\":100,\"outer_green\":100,\"outer_blue\":100,\"outer_transparency\":100,\"inner_red\":100,\"inner_green\":125,\"inner_blue\":175,\"inner_transparency\":200}");

	cout << "Passed" << endl << endl;

	cout << "Tests on  VectorDocument class" << endl;
	assert((VectorDoc.get_Quadrilateral(0)->get_square() > 23) && (VectorDoc.get_Quadrilateral(0)->get_square() < 24));
	assert((VectorDoc.get_Quadrilateral(0)->get_perimeter() > 21) && (VectorDoc.get_Quadrilateral(0)->get_perimeter() < 22));
	VectorDoc.get_Quadrilateral(0)->move('x', 3);
	VectorDoc.get_Quadrilateral(0)->move('y', 4);
	assert((VectorDoc.get_Quadrilateral(0)->get_Points()[0].x == 4) && (VectorDoc.get_Quadrilateral(0)->get_Points()[0].y == 6));
	VectorDoc.get_Quadrilateral(0)->scale(2);
	assert((VectorDoc.get_Quadrilateral(0)->get_Points()[1].x == 10) && (VectorDoc.get_Quadrilateral(0)->get_Points()[1].y == 14));
	VectorDoc.get_Quadrilateral(0)->rotate(90);
	assert((VectorDoc.get_Quadrilateral(0)->get_Points()[1].x == -14) && (VectorDoc.get_Quadrilateral(0)->get_Points()[1].y == 10));

	assert(VectorDoc.get_Circumference(0)->get_radius() == 4);
	assert((VectorDoc.get_Circumference(0)->get_perimeter() > 25) && (VectorDoc.get_Circumference(0)->get_perimeter() < 26));
	assert((VectorDoc.get_Circumference(0)->get_square() > 50) && (VectorDoc.get_Circumference(0)->get_square() < 51));
	VectorDoc.get_Circumference(0)->move('x', 2);
	VectorDoc.get_Circumference(0)->move('y', 4);
	assert((VectorDoc.get_Circumference(0)->get_x() == 3) && (VectorDoc.get_Circumference(0)->get_y() == 1));
	VectorDoc.get_Circumference(0)->scale(2);
	assert(VectorDoc.get_Circumference(0)->get_radius() == 8);
	cout << "Passed" << endl;


	system("cls");
}