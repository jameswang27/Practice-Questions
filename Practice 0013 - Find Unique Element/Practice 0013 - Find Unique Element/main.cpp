//Question from the UPE Mock Interview Session

/*
Given an array of odd size that contains pairs of integers and a unique unpaired integer, find the value of the unpaired integer.
*/

#include <assert.h>
#include <iostream>
using namespace std;

int findUnique(int a[], int n);

int main()
{
	int test[11] = { 1,3,5,5,4,3,2,2,1,8,8 };
	assert(findUnique(test, 11) == 4);
	cout << "Passed all tests." << endl;
}

/*
Parameters:
- a[]: integer array to search. Satisfies requirements of the problem
- n: size of array
Return value:
integer representing the unique integer in the array
*/
int findUnique(int a[], int n)
{
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		result ^= a[i];
	}
	return result;
}