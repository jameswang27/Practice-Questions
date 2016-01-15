//SOLVED

//number 75 on leetcode

/*
Given an array with n objects colored red, white or blue, sort them so that objects of the same color are adjacent, with the colors in the order red, white and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

Note:
You are not suppose to use the library's sort function for this problem.
*/

#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
	void sortColors(vector<int>& nums)
	{
		int redIndex = 0;
		int bluIndex = nums.size() - 1;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] == 0 && i >= redIndex)
			{
				int temp = nums[redIndex];
				nums[redIndex] = 0;
				nums[i] = temp;
				redIndex++;
				i--;
			}

			else if (nums[i] == 2 && i <= bluIndex)
			{
				int temp = nums[bluIndex];
				nums[bluIndex] = 2;
				nums[i] = temp;
				bluIndex--;
				i--;
			}
		}
	}
};

int main()
{
	return 0;
}
