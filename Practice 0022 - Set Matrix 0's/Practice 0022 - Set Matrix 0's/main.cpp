//Question 1.7 from Cracking the Coding Interview

/*
Write an algorithm such that if an element in an MxN matrix is 0, its entire row and column are set to 0.
*/

//Note: The solution in Java has an easy way of passing a 2D array to a function as a parameter. I'm doing it directly in main
//in this case because I don't want to pick around with that at the moment.

//Edit these to alter the dimensions of the matrix;
const int M = 5;
const int N = 6;

#include <iostream>
using namespace std;

int main()
{
	int matrix[M][N] = { 1,1,1,1,1,1,
						1,1,1,1,1,0,
						1,1,0,1,0,1,
						1,1,1,1,1,1,
						0,1,1,1,1,1 };
	int flaggedRows[M] = { 0 };
	int flaggedCols[N] = { 0 };

	//Print out original matrix, to be compared to the changed one after zerofication
	cout << "Original Matrix:" << endl;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << "------------------------------------------------------" << endl;

	//Flag columns and rows for zerofication
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (matrix[i][j] == 0)
			{
				flaggedRows[i] = 1;
				flaggedCols[j] = 1;
			}
		}
	}

	//Apply the changes
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (flaggedRows[i] == 1 || flaggedCols[j] == 1)
			{
				matrix[i][j] = 0;
			}
		}
	}

	//Print out the changed matrix
	cout << "New Matrix:" << endl;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}