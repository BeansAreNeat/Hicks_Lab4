#include <iostream>
using namespace std;

typedef int* IntArrPtr;

int main()
{
	int d1, d2;
	cout << "Enter the row and colum dimensions: " << endl;
	cin >> d1 >> d2;

	IntArrPtr* m = new IntArrPtr[d1];
	for (int i = 0; i < d1; i++)
	{
		m[i] = new int[d2];
	}

	cout << "Enter " << d1 << " rows of " << d2 << " integers each: " << endl;
	for (int i = 0; i < d1; i++)
	{
		for (int j = 0; j < d2; j++)
		{
			cin >> m[i][j];
		}
	}

	cout << "Echoing the 2-D array: " << endl;
	for (int i = 0; i < d1; i++)
	{
		for (int j = 0; j < d2; i++)
		{
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
}