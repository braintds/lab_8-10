#pragma once
#include"Point.h"
#include "Header.h"


class Color {
private:
	unsigned short int red, green, blue, transparency;

public:
	Color(unsigned short int, unsigned short int, unsigned short int, unsigned short int);
	int get_red();
	int get_blue();
	int get_green();
	int get_transparency();
	void print();
	bool is_color();
	void change_param();
};