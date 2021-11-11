#include <iostream>
#include <string>

using namespace std;

class Matrix
{
	int array[4];
public:
	Matrix() { array[0] = array[1] = array[2] = array[3] = 0; }
	Matrix(int a, int b, int c, int d) { array[0] = a, array[1] = b, array[2] = c, array[3] = d; }
	void show();
	/*
	Matrix operator+ (Matrix x);
	Matrix& operator+= (Matrix x);
	bool operator== (Matrix x);*/
	
	void operator>> (int x[]);
};
/*
Matrix Matrix::operator+ (Matrix x)
{
	Matrix temp;

	for (int i = 0; i < 4; i++)
		temp.array[i] = this->array[i] + x.array[i];
	
	return temp;
}

Matrix& Matrix::operator+=(Matrix x)
{
	for (int i = 0; i < 4; i++)
		this->array[i] += x.array[i];

	return *this;
}

bool Matrix::operator==(Matrix x)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->array[i] != x.array[i])
			return false;
	}
	return true;
}*/

void Matrix::operator>> (int x[])
{
	for (int i = 0; i < 4; i++)
		this->array[i] = x[i];

}

void Matrix::show()
{
	cout << "Matrix = {";
	cout << array[0] << ' ' << array[1] << ' ' << array[2] << ' ' << array[3] << " }" << endl;
}
int main()
{
	Matrix a(4, 3, 2, 1), b;

	int x[4], y[4] = { 1,2,3,4 };
	a >> x;
	a.show();
}
