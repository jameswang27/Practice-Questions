//SOLVED

//number 7 on leetcode
/*
Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321
*/

#include <algorithm>
class Solution 
{
public:
	int reverse(int x) 
	{
		long long result = 0;
		while (x != 0)
		{
			result = result * 10 + x % 10;
			x /= 10;
		}

		return (result > INT_MAX || result < INT_MIN) ? 0 : result;
	}
};

int main()
{
	return 0;
}