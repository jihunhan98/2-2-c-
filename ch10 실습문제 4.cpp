#include <iostream>
#include <string>

using namespace std;

template <class T>

bool search(int value, T array[], int size)
{
	for (int i = 0; i < size; i++) {
		if (array[i] == value)
			return true;
	}
	return false;
}

int main()
{
	int x[] = { 1,10,100,5,4 };
	if (search(100, x, 5))
		cout << "100이 x 배열에 포함이 되어있다.";
	else
		cout << "100이 x 배열에 포함되어 있지 않다.";
}
