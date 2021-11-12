#include <iostream>

using namespace std;

class SortedArray {
	int size;
	int* p;
	void sort();

public:
	SortedArray();
	SortedArray(SortedArray& src);
	SortedArray(int p[], int size);
	~SortedArray() {}
	SortedArray operator + (SortedArray& op2);
	SortedArray& operator = (const SortedArray& op2);
	void show();
};

SortedArray::SortedArray() { size = 0, p = NULL; }

//매개변수 두 개를 갖는 생성자
SortedArray::SortedArray(int p[], int size)
{
	this->p = new int[size];
	this->size = size;
	for (int i = 0; i < size; i++)
		this->p[i] = p[i];
}
//복사 생성자
SortedArray::SortedArray(SortedArray& src)
{
	this->size = src.size;
	this->p = new int[src.size];
	for (int i = 0; i < src.size; i++)
		this->p[i] = src.p[i];
}

//+연산자
SortedArray SortedArray::operator+ (SortedArray& op2)
{
	SortedArray temp;
	temp.size = this->size + op2.size;
	temp.p = new int[temp.size];

	for (int i = 0; i < this->size; i++)
		temp.p[i] = this->p[i];
	for (int i = 0; i < op2.size; i++)
		temp.p[i + this->size] = op2.p[i];

	return temp;
}

//=연산자
SortedArray& SortedArray::operator=(const SortedArray& op2)
{
	this->p = new int[op2.size];
	this->size = op2.size;

	for (int i = 0; i < op2.size; i++)
		this->p[i] = op2.p[i];

	

	return *this;
}
//오름차순으로 정렬
void SortedArray::sort()
{
	int temp;
	for (int i = 0; i < this->size - 1; i++)
	{
		for (int k = i; k < this->size; k++)
		{
			if (this->p[i] > this->p[k])
			{
				temp = this->p[i];
				this->p[i] = this->p[k];
				this->p[k] = temp;
			}
		}
	}
}
//p배열 출력
void SortedArray::show()
{
	this->sort();

	cout << "배열 출력 : ";
	for (int i = 0; i < this->size; i++)
		cout << this->p[i] << ' ';
	cout << endl;
}
int main()
{
	int n[] = { 2,20,6 };
	int m[] = { 10,7,8,30 };
	SortedArray a(n, 3), b(m, 4), c;

	c = a + b;

	a.show();
	b.show();
	c.show();
}
