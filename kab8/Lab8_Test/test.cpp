#include "pch.h"

extern "C++" {
#include "../kab8/Quadrilateral.h"
#include "../kab8/Quadrilateral.cpp"
#include "../kab8/Straight.cpp"
#include "../kab8/Color.cpp"
#include "../kab8/Point.cpp"
#include "../kab8/Circle.cpp"
#include "../kab8/Ñircumference.cpp"
}


Point a(0, 0), b(0, 4), c(4, 4), d(4, 0);
Color s(235, 1, 1, 1);

Ñircumference cir(c, s, 4);
Circle circle(cir, s);

Straight aa(a, b, s), ab(b, c, s), ac(c, d, s), ad(d, a, s);
vector <Straight> t{ aa,ab,ac,ad };
Quadrilateral quad(t, s);

TEST(Lab8_Test, Square_Perimeter) {
	ASSERT_FLOAT_EQ(quad.get_perimeter(), 16) << "P = " << quad.get_perimeter();

}

TEST(Lab8_Test, Square_Area) {
	ASSERT_FLOAT_EQ(quad.get_area(), 16);
}

TEST(Lab8_Test, Circle_Area) {
	ASSERT_FLOAT_EQ(circle.get_square(), 50.26548);
}

TEST(Lab8_Test, Circle_Perimeter) {
	ASSERT_FLOAT_EQ(circle.get_perimeter(), 25.13274);
}



//RUN_ALL_TESTS()