//Question 17.3 in Cracking the Coding Interview

/*
Write an algorithm which computes the number of trailing zeroes in a factorial.
*/

#include <assert.h>
#include <iostream>
using namespace std;

int computeZeroes(int n);

int main()
{
	assert(computeZeroes(19) == 3);
	assert(computeZeroes(26) == 6);
	cout << "Passed all tests." << endl;
}

/*
Parameter:
	-n: The number, when factorialed, that we want to calculate the number of trailing zeroes for. Must be a positive integer
Return value:
	Will return the number of trailing zeroes of the factorial
*/
//The principle is to count the number of times a multiple of 5 appears, because 2*5 produces a trailing 0 and there are more
//2's than 5's in every factorialized number
int computeZeroes(int n)
{
	if (n < 0) return -1;
	int count = 0;
	for (int i = 5; n / i > 0; i *= 5)
	{
		count += n / i; 
	}
	return count;
}