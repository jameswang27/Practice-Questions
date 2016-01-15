//Question 17.6 from Cracking the Coding Interview

/*
Given an array of integers, write a method to find indices m and n such that if you sorted elements m through n,
the entire array would be sorted. Minimize n - m (that is, find the smallest such sequence).
*/

#include <assert.h>
#include <iostream>
using namespace std;

struct Range
{
	int start;
	int end;
};

Range findRange(int a[], int n);

int main()
{
	int test[13] = { 1, 2, 4, 7, 10, 11, 7, 12, 6, 7, 16, 18, 19 };
	Range temp = findRange(test, 13);
	assert(temp.end == 9 && temp.start == 3);
	int test2[13] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
	Range temp2 = findRange(test2, 13);
	int test3[13] = { 1, 2, 3, 4, 5, 6, 7, 8, 10, 9, 11, 12, 13 };
	Range temp3 = findRange(test3, 13);
	assert(temp3.end == 9 && temp3.start == 8);

	cout << "Passed all tests." << endl;
}

/*
Parameters:
	-a[]: array of integers we are examining
	-n: size of the array of integers that has been passed through
*/

Range findRange(int a[], int n)
{
	//Initialize our return structure
	Range answer;
	answer.start = 0;
	answer.end = n - 1;

	//Find increasing subsequence starting from bottom
	int lower = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] <= a[i + 1]) lower++;
		else break;
	}

	//find decreasing subsequence starting from top
	int higher = n - 1;
	for (int j = n - 1; j > 0; j--)
	{
		if (a[j] >= a[j - 1]) higher--;
		else break;
	}


	//If the two subsequences cross then they will cross all the way to the end, which means the array was already sorted
	//This is an edge case.
	if (lower > higher) return answer; 

	int mid_start = lower + 1; 
	int mid_end = higher - 1;
	int mid_max = a[mid_start];
	int mid_min = a[mid_start];

	for (int k = mid_start; k <= mid_end; k++)
	{
		if (mid_max < a[k]) mid_max = a[k];
		if (mid_min > a[k]) mid_min = a[k];
	}

	//Now that we have the minimum and maximum of the middle, we trim the increasing and decreasing subsequence to the point where we 
	//no longer need to trim it
	while (a[lower - 1] >= mid_min) lower--;
	while (a[higher + 1] <= mid_max) higher++;
	answer.start = lower;
	answer.end = higher;
	return answer;
}