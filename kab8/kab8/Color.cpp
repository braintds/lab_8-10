#include"Color.h"


Color::Color(unsigned char red = 0, unsigned char green = 0, unsigned char blue = 0, unsigned char transparency = 0)
	:red{ red }, green{ green }, blue{ blue }, transparency{ transparency }
{
}


char Color::get_red() {
	return red;
}


char Color::get_green() {
	return green;
}


char Color::get_blue() {
	return blue;
}


char Color::get_transparency() {
	return transparency;
}


bool Color::is_color()
{
	if ((red >= 0 && red < 256) || (green >= 0 && green < 256) \
		||  (blue >= 0 && blue < 256) || (transparency >= 0 && transparency < 256))
		return true;
	return false;
}

void Color::change_param()
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


char Color::print()
{
	return (', ' + red + ', ' + green + ', ' + blue + ', ' + transparency);
}