#include <iostream>

using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << "인 원" << endl; }
	friend void operator++(Circle &a);
	friend Circle operator++(Circle& a, int x);
	friend Circle operator+(int x, Circle a);
};

void operator++(Circle& a)	//++a 전위연산자
{
	a.radius += 1;

}

Circle operator+(int x, Circle a)
{
	Circle temp = a;
	temp.radius += 1;
	return temp;
}
Circle operator++(Circle &a, int x)
{
	Circle temp = a;
	a.radius += 1;
	return temp;
}

int main()
{
	Circle a(5), b(4);
	b = 1 + a;
	a.show();
	b.show();
}
