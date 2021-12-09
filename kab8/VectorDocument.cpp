#include"VectorDocument.h"


VectorDocument::VectorDocument(vector <Quadrilateral> quadrilaterals, vector <Circle> circles, vector <Circumference> circumferences)
	: quadrilaterals{ quadrilaterals }, circles{ circles }, circumferences{ circumferences }
{

}


void VectorDocument::move(char c, double k)
{
	for (unsigned int i{ 0 }; i < quadrilaterals.size(); i++)
		quadrilaterals[i].move(c, k);
	for (unsigned int i{ 0 }; i < circles.size(); i++)
		circles[i].move(c, k);
	for (unsigned int i{ 0 }; i < circumferences.size(); i++)
		circumferences[i].move(c, k);
}


void VectorDocument::rotate(unsigned int arg)
{
	for (unsigned int i{ 0 }; i < quadrilaterals.size(); i++)
		quadrilaterals[i].rotate(arg);
	for (unsigned int i{ 0 }; i < circles.size(); i++)
		circles[i].rotate(arg);
	for (unsigned int i{ 0 }; i < circumferences.size(); i++)
		circumferences[i].rotate(arg);
}


void VectorDocument::scale(unsigned int arg)
{
	for (unsigned int i{ 0 }; i < quadrilaterals.size(); i++)
		quadrilaterals[i].scale(arg);
	for (unsigned int i{ 0 }; i < circles.size(); i++)
		circles[i].scale(arg);
	for (unsigned int i{ 0 }; i < circumferences.size(); i++)
		circumferences[i].scale(arg);
}


void VectorDocument::add_circle(Circle Circle)
{
	circles.push_back(Circle);
}


void VectorDocument::add_quadrilateral(Quadrilateral Quadrilateral)
{
	quadrilaterals.push_back(Quadrilateral);
}


int VectorDocument::get_Quadrilateral_vector_size()
{
	return quadrilaterals.size();
}


int VectorDocument::get_Circle_vector_size()
{
	return circles.size();
}


int VectorDocument::get_Circumference_vector_size()
{
	return circumferences.size();
}


Quadrilateral VectorDocument::get_Quadrilateral(unsigned int i)
{
	return quadrilaterals[i];
}


Circle VectorDocument::get_Circle(unsigned int i)
{
	return circles[i];
}


Circumference VectorDocument::get_Circumference(unsigned int i)
{
	return circumferences[i];
}

//Serialization
Document VectorDocument::toJSON() {

	Document document;
	Document::AllocatorType allocator = document.GetAllocator();

	document.SetArray();
	rapidjson::Value array_circles(rapidjson::kArrayType);
	rapidjson::Value array_circumferences(rapidjson::kArrayType);
	rapidjson::Value array_quadrilaterals(rapidjson::kArrayType);

	Value documentType;
	documentType.SetString("VectorDocument", 14, allocator);
	document.AddMember("type", documentType, allocator);

	//rapidjson::Document::AllocatorType allocator = document.GetAllocator();
	for (int i = 0; i < circles.size(); i++)
	{
		array_circles.PushBack(circles[i].toJSON(), allocator);
	}

	document.AddMember("circles_array", array_circles, allocator);


	for (int i = 0; i < circumferences.size(); i++)
	{
		array_circumferences.PushBack(circumferences[i].toJSON(), allocator);
	}

	document.AddMember("circumferences_array", array_circumferences, allocator);


	for (int i = 0; i < quadrilaterals.size(); i++)
	{
		array_quadrilaterals.PushBack(quadrilaterals[i].toJSON(), allocator);
	}

	document.AddMember("quadrilaterals_array", array_quadrilaterals, allocator);


	return document;
}

//Deserialization
bool VectorDocument::fromJSON(const Value& value) {

	if (!value.IsObject())
		return false;

	if (!value.HasMember("type"))
		return false;

	if (std::string(value["type"].GetString()) != std::string("VectorDocument"))
		return false;

	if (!value.HasMember("circles_array"))
		return false;
	else {
		vector <Circle> new_circles;
		Point a(1, 2);
		Colour s(100, 100, 100, 100);
		Circle new_circle(a, s, 4, s);
		const rapidjson::Value& circles_array = value["circles_array"];
		for (int i = 0; i < circles_array.MemberCount(); i++)
		{
			new_circle.fromJSON(circles_array[i]);
			new_circles.push_back(new_circle);
		}
		this->circles = new_circles;
	}

	if (!value.HasMember("circumferences_array"))
		return false;
	else {
		vector <Circumference> new_circumferences;
		Point a(1, 2);
		Colour s(100, 100, 100, 100);
		Circumference new_circumference(a, s, 4);
		const rapidjson::Value& circumferences_array = value["circumferences_array"];
		for (int i = 0; i < circumferences_array.MemberCount(); i++)
		{
			new_circumference.fromJSON(circumferences_array[i]);
			new_circumferences.push_back(new_circumference);
		}
		this->circumferences = new_circumferences;
	}

	if (!value.HasMember("quadrilaterals_array"))
		return false;
	else {
		vector <Quadrilateral> new_quadrilaterals;
		Point a(1, 2), b(3, 4), c(1, -3), d(-2, 4);
		vector <Point> t{ a, b, c, d };
		Colour s(100, 100, 100, 100);
		Quadrilateral new_quadrilateral(t, s, s);
		const rapidjson::Value& quadrilaterals_array = value["quadrilaterals_array"];
		for (int i = 0; i < quadrilaterals_array.MemberCount(); i++)
		{
			new_quadrilateral.fromJSON(quadrilaterals_array[i]);
			new_quadrilaterals.push_back(new_quadrilateral);
		}
		this->quadrilaterals = new_quadrilaterals;
	}
}
