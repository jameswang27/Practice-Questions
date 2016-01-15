//Practice Question 7.3 from Cracking the Coding Interview

/*
Given two lines on a Cartesian plane, determine whether the two lines would intersect.
*/

#include "Line.h"
#include <assert.h>
#include <iostream>
using namespace std;

int main()
{
	Line test1(4.345, 6.344);
	Line test2(4.345, 6.344);
	Line test3(10.325, 6.344);
	Line test4(2.398, 1.874);
	Line test5(4.345, 2.198);
	assert(intersects(test1, test2));
	assert(intersects(test1, test3));
	assert(intersects(test3, test4));
	assert(intersects(test2, test3));
	assert(!intersects(test1, test5));
	cout << "Passed all tests." << endl;
}
