#include <iostream>
#include <string>
using namespace std;

class Point {
	int x, y;
public:
	Point() { this->x = 0; this->y = 0; }
	Point(int x, int y) { this->x = x; this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};

class ColorPoint : public Point {
	string name;
public:
	ColorPoint() : Point() { name = "Black"; }
	ColorPoint(int x, int y) : Point(x, y) { name = ""; }
	ColorPoint(int x, int y, string name) : Point(x, y) { this->name = name; }
	void setPoint(int x, int y) { move(x, y); }
	void setColor(string name) { this->name = name; }
	void show() { cout << name << "색으로 " << "(" << getX() << ',' << getY() << ")에 위치한 점입니다. "<< endl; }
};
int main()
{	/*1번문제
	ColorPoint cp(5, 5, "Red");
	cp.setPoint(10, 20);
	cp.setColor("Blue");
	cp.show();
	1번문제*/
	
	ColorPoint zeroPoint;	
	zeroPoint.show();

	ColorPoint cp(5, 5);
	cp.setPoint(10, 20);
	cp.setColor("Blue");
	cp.show();
}
