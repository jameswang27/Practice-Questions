//Question 17.1 from Cracking the Coding Interview

/*
Write a function to swap a number in place (that is, without any temporary variables).
*/
#include <assert.h>
#include <iostream>
using namespace std;

void swap(int &a, int &b);

int main()
{
	int x = 6;
	int y = 10;
	swap(x, y);
	assert(x == 10);
	assert(y == 6);
	cout << "Passed all tests." << endl;
}

void swap(int &a, int &b)
{
	a = a - b;
	b = a + b;
	a = b - a;
}