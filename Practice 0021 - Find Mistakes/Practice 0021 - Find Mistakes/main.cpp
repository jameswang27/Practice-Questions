//Question 12.1 from Cracking the Coding Interview

/*
Find the mistake(s) in the following code:

unsigned int i;
for (i = 100; 100 >= 0; --i)
	printf("%d\n", i);

*/

//The two errors are as follows:
//	1. because i is unsigned the loop will always be >= 0 and thus continue forever
//	2. %d should be replaced with %u, to print the unsigned value

#include <stdio.h>
using namespace std;
//The correct code, which should print out all the numbers from 100 down to 0, like the original code seems to want.
int main()
{
	unsigned int i;
	for (i = 100; i > 0; --i)
	{
		printf("%u\n", i);
	}
	printf("%u\n", 0);
}