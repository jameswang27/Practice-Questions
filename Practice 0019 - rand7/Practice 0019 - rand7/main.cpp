//Question 17.11 in Cracking the Coding Interview

/*
Implement a method rand7() given rand5(). That is, given a method that generates a random number between 0 and 4 (inclusive),
write a method that generates a random number between 0 and 6 (inclusive).
*/

#include <assert.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int rand5();
int rand7();

int main()
{
	for (int i = 0; i < 100; i++)
	{
		cout << rand7() << endl;
	}
	cout << "Passed all tests." << endl;
}

//Implementation of the "given" rand5() function
int rand5()
{
	return rand() % 5;
}

//Implementation of the rand7() function, that uses rand5() and not the library.
//Think: there is exactly one way for each value between 0 and 20 to be generated. The excess generations are discarded.
//This means that since each value between 0 and 20 have an equal chance of appearing we can mod the result by 7 to achieve 
//our desired result.
int rand7()
{
	while (true)
	{
		int result = 5 * rand5() + rand5();
		if (result < 21) return result % 7;
	}
}