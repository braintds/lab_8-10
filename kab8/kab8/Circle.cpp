#include"Circle.h"


Circle::Circle(Circumference circle, Color color)
	:Circumference( circle ), color{ color }
{
}

Color Circle::get_color()
{
	return color;
}
