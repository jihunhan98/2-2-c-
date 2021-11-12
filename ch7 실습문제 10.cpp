#include <iostream>

using namespace std;

class Statistices {
	int* p;
	int size;

public:
	Statistices() { int size = 0; p = new int[8]; }
	bool operator! ();
	Statistices& operator<<(int x);
	void operator~();
	void operator>>(int& avg);
};

bool Statistices::operator!()
{
	if (this->size = 0)
		return true;
	else
		return false;
}

Statistices& Statistices::operator<<(int x)
{
	this->p[this->size] = x;
	this->size++;
	return *this;
}

void Statistices::operator~()
{
	for (int i = 0; i < this->size; i++)
		cout << this->p[i] << ' ';
}

void Statistices::operator>>(int& avg)
{
	int sum = 0;
	for (int i = 0; i < this->size; i++)
		sum = sum + this->p[i];

	avg = sum / this->size;
}

int main()
{
	Statistices stat;
	if (!stat) cout << "현재 통계 데이터가 업습니다" << endl;

	int x[5];
	cout << "5개의 정수를 입력하세요>>";
	for (int i = 0; i < 5; i++) cin >> x[i];

	for (int i = 0; i < 5; i++) stat << x[i];
	stat << 100 << 200;
	~stat;

	int avg;
	stat >> avg;
	cout << "avg=" << avg << endl;
}
