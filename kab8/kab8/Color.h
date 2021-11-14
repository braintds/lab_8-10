#pragma once
#include"Point.h"
#include "Header.h"


class Color {
private:
	int red, green, blue, transparency;

public:
	Color(int, int, int, int);
	int get_red();
	int get_blue();
	int get_green();
	int get_transparency();
	
	bool is_color();
	void change_param();
};