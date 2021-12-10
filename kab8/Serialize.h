#pragma once
#include <iostream>

#include "..\rapidjson\document.h"
#include "..\rapidjson\writer.h"
#include "..\rapidjson\stringbuffer.h"
#include "..\rapidjson\reader.h"

using namespace rapidjson;


class Serializable
{

public:

	Serializable() {};

	//Serialization by default
	virtual Document toJSON() = 0;

	//Deserialization by default
	virtual bool fromJSON(const Value& value) = 0;
};