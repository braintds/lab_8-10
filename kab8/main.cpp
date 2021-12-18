#include "Test.h"


void Color_print(Colour colour)
{
	cout << colour.get_red() << ", " << colour.get_green() << ", " << colour.get_blue() << ", " << colour.get_transparency() << endl;
}


void Quadrilateral_print(Quadrilateral quad)
{
	cout << "===Quadrilateral===" << endl;
	cout << "Points:" << endl;
	for (unsigned int i{ 0 }; i < quad.get_vector_size(); i++)
		cout << quad.get_x(i) << ":" << quad.get_y(i) << endl;
	cout << "inner colour: "; Color_print(quad.get_inner_colour());
	cout << "outer colour: "; Color_print(quad.get_outer_colour());
}


void Circumference_print(Circumference circum)
{
	cout << "===Circumference===" << endl;
	cout << "centre: " << circum.get_x() << ":" << circum.get_y() << endl;
	cout << "radius: " << circum.get_radius() << endl;
	cout << "outer colour: "; Color_print(circum.get_outer_colour());
}


void Circle_print(Circle circle)
{
	cout << "===Circle===" << endl;
	cout << "centre: " << circle.get_x() << ":" << circle.get_y() << endl;
	cout << "radius: " << circle.get_radius() << endl;
	cout << "outer colour: "; Color_print(circle.get_outer_colour());
	cout << "inner colour: ";  Color_print(circle.get_inner_colour());
}


void VectorDocument_print(VectorDocument VectorDoc)
{
	cout << "===Circles===" << endl;
	for (unsigned int i{ 0 }; i < VectorDoc.get_Circle_vector_size(); i++)
		Circle_print(*VectorDoc.get_Circle(i));

	cout << "===Quadrilaterals===" << endl;
	for (unsigned int i{ 0 }; i < VectorDoc.get_Quadrilateral_vector_size(); i++)
		Quadrilateral_print(*VectorDoc.get_Quadrilateral(i));

	cout << "===Circumferences===" << endl;
	for (unsigned int i{ 0 }; i < VectorDoc.get_Circumference_vector_size(); i++)
		Circumference_print(*VectorDoc.get_Circumference(i));
}


int main()
{
	test_main();
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Point a(1, 2), b(3, 4), c(1, -3), d(-2, 4), e(-3, -4);
	Colour s(235, 235, 235, 265), s1(100, 100, 100, 100);

	Circumference cir(c, s, 4);
	Circle circle(c, s, 4, s1), circll(e, s1, 5, s);

	vector <Point> t{ a, b, c, d }, tt{ a,b,c,e };

	Quadrilateral quad(t, s1, s), quad1(t, s1, s);

	vector <Quadrilateral> qs{ quad,quad1 };
	vector <Circumference> cs{ cir };
	vector <Circle> crc{ circle, circll };

	VectorDocument VectorDoc(qs, crc, cs);
	VectorDocument_print(VectorDoc);
	VectorDoc.rotate((unsigned int)270);
	cout << endl;
	VectorDocument_print(VectorDoc);

	return 0;
}