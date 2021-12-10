#include"Colour.h"


Colour::Colour(int red = 0, int green = 0, int blue = 0, int transparency = 0)
	:red{ red }, green{ green }, blue{ blue }, transparency{ transparency }
{
	try
	{
		if (red < 0 || red > 255) throw 1;
		if (green < 0 || green > 255) throw 2;
		if (blue < 0 || blue > 255) throw 3;
		if (transparency < 0 || transparency > 255) throw 4;
	}
	catch (int error)
	{
		if (error == 1)
		{
			cout << "RGB red code error. Set to default: 0" << endl;
			this->red = 0;
		}
		if (error == 2)
		{
			cout << "RGB green code error. Set to default: 0" << endl;
			this->green = 0;
		}
		if (error == 3)
		{
			cout << "RGB blue code error. Set to default: 0" << endl;
			this->blue = 0;
		}
		if (error == 4)
		{
			cout << "RGB transparency code error. Set to default: 0" << endl;
			this->transparency = 0;
		}
	}
}


int Colour::get_red()
{
	return red;
}


int Colour::get_green()
{
	return green;
}


int Colour::get_blue()
{
	return blue;
}


int Colour::get_transparency()
{
	return transparency;
}


bool Colour::is_colour()
{
	if ((red >= 0 && red < 256) || (green >= 0 && green < 256) \
		|| (blue >= 0 && blue < 256) || (transparency >= 0 && transparency < 256))
		return true;
	return false;
}


//Serialization
Document Colour::toJSON() {

	Document document;
	Document::AllocatorType allocator = document.GetAllocator();

	document.SetObject();

	Value documentType;
	documentType.SetString("Colour", 6, allocator);
	document.AddMember("type", documentType, allocator);

	Value documentRed;
	documentRed.SetInt(this->red);
	document.AddMember("red", documentRed, allocator);

	Value documentGreen;
	documentGreen.SetInt(this->green);
	document.AddMember("green", documentGreen, allocator);

	Value documentBlue;
	documentBlue.SetInt(this->blue);
	document.AddMember("blue", documentBlue, allocator);

	Value documentTransparency;
	documentTransparency.SetInt(this->transparency);
	document.AddMember("transparency", documentTransparency, allocator);

	return document;
}

//Deserialization
bool Colour::fromJSON(const Value& value) {

	if (!value.IsObject())
		return false;

	if (!value.HasMember("type"))
		return false;

	if (std::string(value["type"].GetString()) != std::string("Colour"))
		return false;

	int _red;
	int _green;
	int _blue;
	int _transparency;

	if (!value.HasMember("red"))
		return false;
	else _red = value["red"].GetInt();

	if (!value.HasMember("green"))
		return false;
	else _green = value["green"].GetInt();

	if (!value.HasMember("blue"))
		return false;
	else _blue = value["blue"].GetInt();

	if (!value.HasMember("transparency"))
		return false;
	else _transparency = value["transparency"].GetInt();


	this->red = _red;
	this->green = _green;
	this->blue = _blue;
	this->transparency = _transparency;
}