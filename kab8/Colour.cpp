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


int Colour::get_red() {
	return red;
}


int Colour::get_green() {
	return green;
}


int Colour::get_blue() {
	return blue;
}


int Colour::get_transparency() {
	return transparency;
}


bool Colour::is_colour()
{
	if ((red >= 0 && red < 256) || (green >= 0 && green < 256) \
		|| (blue >= 0 && blue < 256) || (transparency >= 0 && transparency < 256))
		return true;
	return false;
}

void Colour::change_param()
{
	/*unsigned short int r, g, b, t;
	while (1)
	{
		cout << "введите rgb код:" << endl;
		cin >> r >> g >> b >> t;
		if (r <= 255)
			if (g <= 255)
				if (b <= 255)
					if (t <= 255)
					{
						this->red = r; this->green = g; this->blue = b; this->transparency = t; break;
					}
					else
						cout << "Прозрачность задана неверно!" << endl;
				else
					cout << "Синий оттенок задан неверно!" << endl;
			else
				cout << "Зеленый оттенок задан неверно!" << endl;
		else
			cout << "Красный оттенок задан неверно!" << endl;
	}*/
}