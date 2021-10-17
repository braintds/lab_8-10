#pragma once
#include"Point.h"
#include "Header.h"


class Color {
private:
	unsigned char red, green, blue, transparency;

public:
	Color(unsigned char, unsigned char, unsigned char, unsigned char);
	char get_red();
	char get_blue();
	char get_green();
	char get_transparency();
	char print();
	bool is_color();
	void change_param();
};