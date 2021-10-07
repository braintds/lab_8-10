#include"Color.h"


Color::Color(unsigned short int red = 0, unsigned short int green = 0, unsigned short int blue = 0, unsigned short int transparency = 0)
	:red{ red }, green{ green }, blue{ blue }, transparency{ transparency }
{
}


int Color::get_red() {
	return this->red;
}


int Color::get_green() {
	return this->green;
}


int Color::get_blue() {
	return this->blue;
}


int Color::get_transparency() {
	return this->transparency;
}


bool Color::is_color()
{
	if ((get_red() >= 0 && get_red() < 256) || (get_green() >= 0 && get_green() < 256) \
		||  (get_blue() >= 0 && get_blue() < 256) || (get_transparency() >= 0 && get_transparency() < 256))
		return true;
	return false;
}

void Color::change_param()
{
	unsigned short int r, g, b, t;
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
	}
}


void Color::print()
{
	cout << "RGB - " << get_red() << ", " << get_green() << ", " << get_blue() << ", " << get_transparency() << endl;
}