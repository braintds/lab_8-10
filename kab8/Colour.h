#pragma once
#include "Header.h"
#include "Serialize.h"

class Colour : public Serializable {
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

	Document toJSON() override;
	bool fromJSON(const Value& value) override;
};