#include "Quadrilateral.h"


Quadrilateral::Quadrilateral(vector<Point> a, Colour outer_colour = Colour(0, 0, 0, 0), Colour inner_colour = Colour(0, 0, 0, 0))
	:a{ a }, Figure(outer_colour), inner_colour{ inner_colour }
{
}

int Quadrilateral::get_vector_size()
{
	return a.size();
}


void Quadrilateral::move(char c, double k)
{
	switch (c)
	{
	case 'x':
		for (int i{ 0 }; i < 4; i++)
			a[i].x += k;
		break;
	case 'y':
		for (int i{ 0 }; i < 4; i++)
			a[i].y += k;
		break;
	default:
		cout << "Incorrect argument. You can chose x or y." << endl;
		break;
	}
}


void Quadrilateral::rotate(unsigned int arg)
{
	double* tmp = new double;
	switch (arg)
	{
	case 90:


		for (int i{ 0 }; i < 4; i++)
		{
			*tmp = a[i].x;
			a[i].x = 0 - a[i].y;
			a[i].y = *tmp;
		}

		break;
	case 180:
		for (int i{ 0 }; i < 4; i++)
		{
			a[i].x = 0 - a[i].x;
			a[i].y = 0 - a[i].y;
		}
		break;
	case 270:
		for (int i{ 0 }; i < 4; i++)
			a[i].y = 0 - a[i].y;
		break;
	default:
		cout << "Incorrect argument. You can rotate only on 90, 180 or 270 degrees" << endl;
		break;
	}
	delete tmp;
	tmp = nullptr;
}

void Quadrilateral::scale(double arg)
{
	double dx, dy;

	for (int i{ 1 }; i < 4; i++)
	{
		dx = a[i].x - a[0].x;
		dy = a[i].y - a[0].y;

		a[i].x = (a[i].x - dx) * arg + dx;
		a[i].y = (a[i].y - dy) * arg + dy;
	}
}

double Quadrilateral::get_x(unsigned int i)
{
	return a[i].x;
}

double Quadrilateral::get_y(unsigned int i)
{
	return a[i].y;
}


vector <Point> Quadrilateral::get_Points() const
{
	return a;
}


double Quadrilateral::get_perimeter()
{
	double perimeter = 0;
	for (unsigned int i{ 1 }; i < 5; i++)
	{
		perimeter += sqrt(pow(a[i % 4].x - a[(i - 1) % 4].x, 2.0) + pow(a[i % 4].y - a[(i - 1) % 4].y, 2.0));
	}
	return perimeter;
}


double Quadrilateral::get_square()
{
	double half_perimeter = get_perimeter() / 2;
	double area = 1;

	for (unsigned int i{ 1 }; i < 5; i++)
	{
		area = area * (half_perimeter - sqrt(pow(a[i % 4].x - a[(i - 1) % 4].x, 2.0) + pow(a[i % 4].y - a[(i - 1) % 4].y, 2.0)));
	}
	return sqrt(area);
}


Colour Quadrilateral::get_inner_colour()
{
	return inner_colour;
}


void Quadrilateral::set_inner_colour(Colour colour)
{
	inner_colour = colour;
}


//Serialization
Document Quadrilateral::toJSON() {

	Document document;
	Document::AllocatorType allocator = document.GetAllocator();

	document.SetObject();

	Value documentType;
	documentType.SetString("Quadrilateral", 13, allocator);
	document.AddMember("type", documentType, allocator);

	Value documentX1;
	documentX1.SetDouble(this->a[0].x);
	document.AddMember("x1", documentX1, allocator);

	Value documentY1;
	documentY1.SetDouble(this->a[0].y);
	document.AddMember("y1", documentY1, allocator);

	Value documentX2;
	documentX2.SetDouble(this->a[1].x);
	document.AddMember("x2", documentX2, allocator);

	Value documentY2;
	documentY2.SetDouble(this->a[1].y);
	document.AddMember("y2", documentY2, allocator);

	Value documentX3;
	documentX3.SetDouble(this->a[2].x);
	document.AddMember("x3", documentX3, allocator);

	Value documentY3;
	documentY3.SetDouble(this->a[2].y);
	document.AddMember("y3", documentY3, allocator);

	Value documentX4;
	documentX4.SetDouble(this->a[3].x);
	document.AddMember("x4", documentX4, allocator);

	Value documentY4;
	documentY4.SetDouble(this->a[3].y);
	document.AddMember("y4", documentY4, allocator);


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
bool Quadrilateral::fromJSON(const Value& value) {

	if (!value.IsObject())
		return false;

	if (!value.HasMember("type"))
		return false;

	if (std::string(value["type"].GetString()) != std::string("Quadrilateral"))
		return false;

	double x1, y1, x2, y2, x3, y3, x4, y4;
	int _outer_red, _outer_green, _outer_blue, _outer_transparency;
	int _inner_red, _inner_green, _inner_blue, _inner_transparency;

	if (!value.HasMember("x1"))
		return false;
	else x1 = value["x1"].GetDouble();

	if (!value.HasMember("y1"))
		return false;
	else y1 = value["y1"].GetDouble();

	if (!value.HasMember("x2"))
		return false;
	else x2 = value["x2"].GetDouble();

	if (!value.HasMember("y2"))
		return false;
	else y2 = value["y2"].GetDouble();

	if (!value.HasMember("x3"))
		return false;
	else x3 = value["x3"].GetDouble();

	if (!value.HasMember("y3"))
		return false;
	else y3 = value["y3"].GetDouble();

	if (!value.HasMember("x4"))
		return false;
	else x4 = value["x4"].GetDouble();

	if (!value.HasMember("y4"))
		return false;
	else y4 = value["y4"].GetDouble();

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
	this->a[0] = Point(x1, y1);
	this->a[1] = Point(x2, y2);
	this->a[2] = Point(x3, y3);
	this->a[3] = Point(x4, y4);
}