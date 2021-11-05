#include "pch.h"

extern "C++" {
#include "../kab8/Quadrilateral.h"
#include "../kab8/Quadrilateral.cpp"
#include "../kab8/Straight.cpp"
#include "../kab8/Color.cpp"
#include "../kab8/Point.cpp"
#include "../kab8/Circle.cpp"
#include "../kab8/Circumference.cpp"
}


Point a(0, 0), b(0, 4), c(4, 4), d(4, 0);
Color s(235, 1, 1, 1);

Circumference cir(c, s, 4);
Circle circle(cir, s);

Straight aa(a, b, s), ab(b, c, s), ac(c, d, s), ad(d, a, s);
vector <Straight> t{ aa,ab,ac,ad };
Quadrilateral quad(t, s);

//Point tests
TEST(Point_Test, Print) {
	ASSERT_STREQ(b.print(), "0 4");
}


//Color tests
TEST(Color_Test, Print_Red) {
	ASSERT_EQ(s.get_red(), 235);
}

TEST(Color_Test, Print_Green) {
	ASSERT_EQ(s.get_green(), 1);
}

TEST(Color_Test, Print_Blue) {
	ASSERT_EQ(s.get_blue(), 1);
}

TEST(Color_Test, Print_Transparency) {
	ASSERT_EQ(s.get_transparency(), 1);
}

TEST(Color_Test, Is_Color) {
	ASSERT_TRUE(s.is_color());
}

TEST(Color_Test, Print) {
	ASSERT_STREQ(s.print(), ", 235, 1, 1, 1");
}


//Circle tests
TEST(Circle_Test, Area) {
	ASSERT_FLOAT_EQ(circle.get_square(), 50.26548);
}

TEST(Circle_Test, Perimeter) {
	ASSERT_FLOAT_EQ(circle.get_perimeter(), 25.13274);
}

TEST(Circle_Test, Get_X) {
	ASSERT_EQ(circle.get_x(), 4);
}

TEST(Circle_Test, Get_Y) {
	ASSERT_EQ(circle.get_y(), 4);
}

TEST(Circle_Test, Get_Rad) {
	ASSERT_EQ(circle.get_rad(), 4);
}


//Quadrilateral tests
TEST(Quadrilateral_Test, Square_Perimeter) {
	ASSERT_FLOAT_EQ(quad.get_perimeter(), 16) << "P = " << quad.get_perimeter();

}

TEST(Quadrilateral_Test, Square_Area) {
	ASSERT_FLOAT_EQ(quad.get_area(), 16);
}


//RUN_ALL_TESTS()