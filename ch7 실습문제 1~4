#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title, this->price = price, this->pages = pages;
	}

	void show() {
		cout << title << ' ' << price << "원 " << pages << "페이지" << endl;
	}

	string getTitle() { return title; }

	Book& operator+= (int x);
	friend void operator -= (Book& a, int y);
	friend bool operator==(Book a, int price);

	bool operator== (string title);
	bool operator== (Book b);
	bool operator! ();
};

Book& Book::operator+=(int x)
{
	this->price += x;
	return *this;
}

void operator-= (Book& a, int y)
{
	a.price -= 500;
}

bool operator==(Book a, int price)
{
	if (a.price == price) return true;
	else return false;
}

bool Book::operator==(string title)
{
	if (this->title == title) return true;
	else return false;
}

bool Book::operator==(Book b)
{
	if (this->title == b.title && this->pages == b.pages && this->price == b.price) return true;
	else return false;
}

bool Book::operator!()
{
	if (this->price == 0) return true;
	else return false;
}
int main()
{
	Book a("명품 c++", 30000, 500), b("고품 c++", 30000, 500);
	if (a == 30000) cout << "정가 30000원" << endl;
	if (a == "명품 c++") cout << "명품 c++" << endl;
	if (a == a) cout << "두 책은 같은 책입니다." << endl;

	Book book("벼룩시장", 0, 50);
	if (!book) cout << "공짜다" << endl;

	Book book("청춘", 20000, 300);
	string b;
	cout << "책 이름을 입력하세요>>";
}
