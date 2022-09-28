// Creates and fills 2 matrices and multiplies them
#include <iostream>
#include "ex4_1.h"
using namespace std;

int main()
{
	// This is the equivalent of "A[n,m]" in the exercise instructions
	int rows1 = 2;	// rows1 = n
	int cols1 = 2;	// cols1 = m

	// Matrix 1 Initialization
	int** m1 = new int* [rows1];
	for (int i = 0; i < rows1; i++)
	{
		m1[i] = new int[cols1];
	}
	// Fills matrix 1
	fill_matrix(m1, rows1, cols1);

	// Setup for 2nd matrix
	// This is the equivalent of "B[m,p]" in the exercise
	int rows2 = cols1;	// rows2 = cols1 = m
	int cols2 = 2;		// cols2 = p
	// Matrix 2 Initialization
	int** m2 = new int* [rows2];
	for (int i = 0; i < rows2; i++)
	{
		m2[i] = new int[cols2];
	}
	// Fills matrix 2
	fill_matrix(m2, rows2, cols2);

	// This is the equivalent of "C[n,p]" in the exercise
	int rows3 = rows1;	// rows3 = rows1 = n
	int cols3 = cols2;	// cols3 = cols2 = p

	cout << endl;
	cout << "Both matrices multiplied together: " << endl;
	for (int i = 0; i < rows3; i++)
	{
		for (int j = 0; j < cols3; j++)
		{
			// This is the equivalent of "A[n,m] * B[m,p] = C[n,p]" 
			// in the exercise
			cout << m1[i][j] * m2[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}