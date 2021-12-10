#include "Circumference.h"


Circumference::Circumference(Point centre = Point(0, 0), Colour outer_colour = Colour(0, 0, 0, 0), double radius = 0)
	:centre{ centre }, Figure(outer_colour), radius{ radius }
{
}


void Circumference::move(char c, double k)
{
	switch (c)
	{
	case 'x':
		set_centre(Point(k + get_x(), get_y()));
		break;
	case 'y':
		set_centre(Point(get_x(), k + get_y()));
		break;
	default:
		cout << "Incorrect argument. You can choose x or y." << endl;
		break;
	}
}


void Circumference::rotate(unsigned int arg)
{
	;
}


void Circumference::scale(double arg)
{
	if (arg > 0) 
		radius *= arg;
	else {
		cout << "Incorrect argument. Scale coefficent must be greater than 0." << endl;
	}
}


double Circumference::get_radius()
{
	return radius;
}


double Circumference::get_square()
{
	return M_PI * pow(get_radius(), 2);
}


double Circumference::get_perimeter()
{
	return 2 * M_PI * get_radius();
}


void Circumference::set_centre(Point c)
{
	centre = c;
}


double Circumference::get_x()
{
	return centre.x;
}


double Circumference::get_y()
{
	return centre.y;
}


Point Circumference::get_centre()
{
	return centre;
}
 

void Circumference::set_radius(double r)
{
	this->radius = r;
}

//Serialization
Document Circumference::toJSON() {

	Document document;
	Document::AllocatorType allocator = document.GetAllocator();

	document.SetObject();

	Value documentType;
	documentType.SetString("Circumference", 13, allocator);
	document.AddMember("type", documentType, allocator);

	Value documentCentreX;
	documentCentreX.SetDouble(this->centre.x);
	document.AddMember("centre_x", documentCentreX, allocator);

	Value documentCentreY;
	documentCentreY.SetDouble(this->centre.y);
	document.AddMember("centre_y", documentCentreY, allocator);

	Value documentRadius;
	documentRadius.SetDouble(this->radius);
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

	return document;
}

//Deserialization
bool Circumference::fromJSON(const Value& value) {

	if (!value.IsObject())
		return false;

	if (!value.HasMember("type"))
		return false;

	if (std::string(value["type"].GetString()) != std::string("Circumference"))
		return false;

	double _centre_x, _centre_y, _radius;
	int _outer_red, _outer_green, _outer_blue, _outer_transparency;

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

	this->set_outer_colour(Colour(_outer_red, _outer_green, _outer_blue, _outer_transparency));
	this->set_centre(Point(_centre_x, _centre_y));
	this->radius = _radius;
}