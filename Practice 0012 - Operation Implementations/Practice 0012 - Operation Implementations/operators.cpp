#include "operators.h"

//Returns x * y
int multiply(int x, int y)
{
	int count = 0;
	for (int i = 0; i < absolute(x); i++)
	{
		count += y;
	}

	if (x < 0) return negate(count);
	return count;
}

//Returns the absolute value of a
int absolute(int a)
{
	if (a < 0) return negate(a);
	return a;
}

//Returns x / y
//It is assumed that y != 0
int divide(int x, int y)
{
	int count = 0;
	int absx = absolute(x);
	int absy = absolute(y);
	int product = 0;
	while (product + absy <= absx)
	{
		product += absy;
		count++;
	}

	if ((x < 0 && y < 0) || (x > 0 && y > 0)) return count;
	else return negate(count);
}

//Returns x - y
int subtract(int x, int y)
{
	return x + negate(y);
}

//Returns -a
int negate(int a)
{
	int count = 0;
	int incr = (a < 0) ? 1 : -1;
	while (a != 0)
	{
		a += incr;
		count += incr;
	}

	return count;
}