//Practice 7.4 from Cracking the Coding Interview

/*
Write methods to implement the multiply, subtract, and divide operations for integers. Use only the add operator.
*/

#include <assert.h>
#include "operators.h"
#include <iostream>
using namespace std;

int main()
{
	assert(subtract(5, 2) == 3);
	assert(subtract(5, 6) == -1);
	assert(subtract(-4, -7) == 3);
	assert(subtract(5, -4) == 9);
	assert(subtract(-12, -6) == -6);
	assert(multiply(5, 4) == 20);
	assert(multiply(5, -4) == -20);
	assert(multiply(-4, 5) == -20);
	assert(multiply(-5, -4) == 20);
	assert(divide(0, 8) == 0);
	assert(divide(8, 4) == 2);
	assert(divide(9, 4) == 2);
	assert(divide(9, -3) == -3);
	assert(divide(-9, -3) == 3);
	assert(divide(-9, 3) == -3);
	cout << "All tests passed." << endl;
}