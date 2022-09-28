#include <iostream>
using namespace std;

void fill_matrix(int**& m, int& r, int& c)
{
	// Filling matrix 1
	cout << "Enter " << r << " rows of " << c << " ints" << endl;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> m[i][j];
		}
	}
}