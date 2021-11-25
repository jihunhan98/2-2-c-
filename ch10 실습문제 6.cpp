#include <iostream>
#include <string>

using namespace std;

template <class T>

T* remove(T src[], int sizesrc, T minus[], int sizeminus, int* retSize)
{
	T* newArray = new int[10];
	bool toggle;

	for (int i = 0; i < sizesrc; i++)
	{
		toggle = true;

		for (int j = 0; j < sizeminus; j++)
		{
			if (minus[j] == src[i])
				toggle = false;
		}

		if (toggle)
			newArray[(*retSize)++] = src[i];	
	}
	return newArray;
}

int main()
{
	int src[] = { 1,2,3,4,5,6,7,8,9,10 };
	int minus[] = { 2,4,6,8,10 };
	int* retSize = new int;
	int* newArray = new int[10];
	*retSize = 0;

	newArray = remove(src, 10, minus, 5, retSize);

	for (int i = 0; i < *retSize; i++)
		cout << newArray[i] << ' ';
}
