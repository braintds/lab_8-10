#include"Circle.h"


Circle::Circle(Point centre = Point(0, 0), Colour outer_colour = Colour(0, 0, 0, 0), double radius = 0, Colour inner_colour = Colour(0, 0, 0, 0))
	:inner_colour{ inner_colour }, Circumference(centre, outer_colour, radius)
{
}


Colour Circle::get_inner_colour()
{
	return inner_colour;
}


void Circle::set_inner_colour(Colour colour)
{
	inner_colour = colour;
}

//Serialization 
Document Circle::toJSON() {

	Document document;
	Document::AllocatorType allocator = document.GetAllocator();

	document.SetObject();

	Value documentType;
	documentType.SetString("Circle", 6, allocator);
	document.AddMember("type", documentType, allocator);

	Value documentCentreX;
	documentCentreX.SetDouble(this->get_centre().x);
	document.AddMember("centre_x", documentCentreX, allocator);

	Value documentCentreY;
	documentCentreY.SetDouble(this->get_centre().y);
	document.AddMember("centre_y", documentCentreY, allocator);

	Value documentRadius;
	documentRadius.SetDouble(this->get_radius());
	document.AddMember("radius", documentRadius, allocator);

	Value documentOuterRed;
	documentOuterRed.SetInt(get_outer_colour().get_red());
	document.AddMember("outer_red", documentOuterRed, allocator);

	Value documentOuterGreen;
	documentOuterGreen.SetInt(get_outer_colour().get_green());
	document.AddMember("outer_green", documentOuterGreen, allocator);

	Value documentOuterBlue;
	documentOuterBlue.SetInt(get_outer_colour().get_blue());
	document.AddMember("outer_blue", documentOuterBlue, allocator);

	Value documentOuterTransparency;
	documentOuterTransparency.SetInt(get_outer_colour().get_transparency());
	document.AddMember("outer_transparency", documentOuterTransparency, allocator);

	Value documentInnerRed;
	documentInnerRed.SetInt(get_inner_colour().get_red());
	document.AddMember("inner_red", documentInnerRed, allocator);

	Value documentInnerGreen;
	documentInnerGreen.SetInt(get_inner_colour().get_green());
	document.AddMember("inner_green", documentInnerGreen, allocator);

	Value documentInnerBlue;
	documentInnerBlue.SetInt(get_inner_colour().get_blue());
	document.AddMember("inner_blue", documentInnerBlue, allocator);

	Value documentInnerTransparency;
	documentInnerTransparency.SetInt(get_inner_colour().get_transparency());
	document.AddMember("inner_transparency", documentInnerTransparency, allocator);

	return document;
}

//Deserialization 
bool Circle::fromJSON(const Value& value) {

	if (!value.IsObject())
		return false;

	if (!value.HasMember("type"))
		return false;

	if (std::string(value["type"].GetString()) != std::string("Circle"))
		return false;

	double _centre_x, _centre_y, _radius;
	int _outer_red, _outer_green, _outer_blue, _outer_transparency;
	int _inner_red, _inner_green, _inner_blue, _inner_transparency;

	if (!value.HasMember("centre_x"))
		return false;
	else _centre_x = value["centre_x"].GetDouble();

	if (!value.HasMember("centre_y"))
		return false;
	else _centre_y = value["centre_y"].GetDouble();

	if (!value.HasMember("radius"))
		return false;
	else _radius = value["radius"].GetDouble();

	if (!value.HasMember("outer_red"))
		return false;
	else _outer_red = value["outer_red"].GetInt();

	if (!value.HasMember("outer_green"))
		return false;
	else _outer_green = value["outer_green"].GetInt();

	if (!value.HasMember("outer_blue"))
		return false;
	else _outer_blue = value["outer_blue"].GetInt();

	if (!value.HasMember("outer_transparency"))
		return false;
	else _outer_transparency = value["outer_transparency"].GetInt();

	if (!value.HasMember("inner_red"))
		return false;
	else _inner_red = value["inner_red"].GetInt();

	if (!value.HasMember("inner_green"))
		return false;
	else _inner_green = value["inner_green"].GetInt();

	if (!value.HasMember("inner_blue"))
		return false;
	else _inner_blue = value["inner_blue"].GetInt();

	if (!value.HasMember("inner_transparency"))
		return false;
	else _inner_transparency = value["inner_transparency"].GetInt();

	this->set_outer_colour(Colour(_outer_red, _outer_green, _outer_blue, _outer_transparency));
	this->set_inner_colour(Colour(_inner_red, _inner_green, _inner_blue, _inner_transparency));
	this->set_centre(Point(_centre_x, _centre_y));
	this->set_radius(_radius);
}