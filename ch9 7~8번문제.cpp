#include <iostream>
using namespace std;

class Shape{
protected:
    string name;
    int width, height;
public:
    Shape(string name = "", int width = 0, int height = 0){
        this->name = name, this->width = width, this->height = height;}
    virtual double getArea() = 0;
    string getName(){return name;}
};

class Oval : public Shape{
public:
    Oval(string name, int width, int height) : Shape(name,width,height){;}
    double getArea(){return 3.14*this->width * this->width;}
};
class Rect : public Shape{
public:
    Rect(string name, int width, int height) : Shape(name,width,height){;}
    double getArea(){return this->width * this->height;}
};
class Triangular : public Shape{
public:
    Triangular(string name, int width, int height) : Shape(name,width,height){;}
    double getArea(){return this->width * this->height/2;}
};
int main()
{
    Shape *p[3];
    p[0] = new Oval("빈대떡", 10,20);
    p[1] = new Rect("찰떡", 30,40);
    p[2] = new Triangular("토스트", 30,40);
    for(int i=0; i<3; i++)
        cout << p[i]->getName() << "넓이는 " << p[i]->getArea() << endl;
    
    for(int i=0; i<3; i++)
        delete p[i];
    
    return 0;
}
