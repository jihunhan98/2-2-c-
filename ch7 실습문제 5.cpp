#include <iostream>
#include <string>

using namespace std;

class Color {
	int red, green, blue;

public:
	Color() { red = green = blue = 0; }
	Color(int r, int g, int b) { red = r, green = g, blue = b; }
	void setColor(int r, int g, int b) { red = r; green = g, blue = b; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
	
	friend Color operator+ (Color x, Color y);
	friend bool operator== (Color x, Color y);
	//Color operator+ (Color x);
	//bool operator==(Color x);
};

Color operator+ (Color x, Color y)
{
	Color temp;
	temp.red = x.red + y.red;
	temp.blue = x.blue + y.blue;
	temp.green = x.green + y.green;
	return temp;
}

bool operator== (Color x, Color y)
{
	if (x.red == y.red && x.blue == y.blue && x.green == y.green) return true;
	else return false;
}
//Color 클래스의 멤버함수로 구현한 메소드.
/*
Color Color::operator+(Color x)
{
	Color temp;
	temp.red = this->red + x.red;
	temp.green = this->green + x.green;
	temp.blue = this->blue + x.blue;

	return temp;
}

bool Color::operator==(Color x)
{
	if (this->red == x.red && this->blue == x.blue && this->green == x.green) return true;
	else false;
}*/

int main()
{
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fucshia(255, 0, 255);
	if (c == fucshia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
}
