#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return radius * radius * 3.14; }
};

class NameCircle : public Circle {
	string name;
public:
	NameCircle() { this->name = "", setRadius(0); }
	NameCircle(int radius, string name) { setRadius(radius), this->name = name; }
	void setName(string name) { this->name = name; }
	void show() { cout << "반지름이 " << getRadius() << "인 " << this->name << endl; }
	string getName() { return name; }
};


int main()
{
	NameCircle waffle(3, "waffle");
	waffle.show();
	//1번
	NameCircle pizza[5];
	int radius;
	string name;
	int maxIndex = 0;
	int max= 0;
	cout << "5개의 정수 반지름과 원의 이름을 입력하세요" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << i+1 << " >> ";
		cin >> radius >> name;
		pizza[i].setRadius(radius);
		pizza[i].setName(name);
	}
	
	for (int i = 0; i < 5; i++)
	{
		if (pizza[i].getArea() > max)
		{
			max = pizza[i].getArea();
			maxIndex = i;
		}
	}
	cout << "가장 면적이 큰 피자는 " << pizza[maxIndex].getName() << "입니다" << endl;
}
