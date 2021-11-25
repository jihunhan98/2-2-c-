#include <iostream>
#include <string>

using namespace std;

template <class T>

void reverseArray(T array[], int size)
{
	int end = 4;
	T temp;
	for (int i = 0; i < size/2; i++)
	{
		temp = array[end];
		array[end] = array[i];
		array[i] = temp;
		end--;
	}
}

int main()
{
	int x[] = { 1,10,100,5,4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++)
		cout << x[i] << ' ';
}
