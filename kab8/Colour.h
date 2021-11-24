#pragma once
#include"Point.h"
#include "Header.h"


class Colour {
private:
	int red, green, blue, transparency;

public:
	Colour(int, int, int, int);
	int get_red();
	int get_blue();
	int get_green();
	int get_transparency();

	bool is_colour();
	void change_param();
};