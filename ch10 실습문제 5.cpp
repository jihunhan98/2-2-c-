#include <iostream>
#include <string>

using namespace std;

template <class T>

T* concat(T a[], int sizeA, T b[], int sizeB)
{
	T* newArray = new int[sizeA + sizeB];
	for (int i = 0; i < sizeA; i++)
		newArray[i] = a[i];
	for (int i = sizeA; i < sizeA+sizeB; i++)
		newArray[i] = b[i - sizeA];

	return newArray;
}

int main()
{
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };
	int* c = new int[10];
	c = concat(a, 5, b, 5);
	for (int i = 0; i < 10; i++)
	{
		cout << c[i] << ' ';
	}
}
