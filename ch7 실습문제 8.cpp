#include <iostream>

using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << "인 원" << endl; }
	friend void operator++(Circle &a);
	friend Circle operator++(Circle& a, int x);
};

void operator++(Circle& a)	//++a 전위연산자
{
	a.radius += 1;

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
	++a;
	b = a++;
	a.show();
	b.show();
}
