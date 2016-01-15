//Question 17.5 from Cracking the Coding Interview

/*
The Game of Master Mind is played as follows:

The computer has four slots, and each slot will contain a ball that is red (R), yellow (Y), green (G), or blue (B). For example,
the computer might have RGGB (Slot #1 is red, Slots #2 and #3 are green, and Slot #5 is blue).

You, the user, are trying to guess the solution. You might, for example, guess YRGB.

When you guess the correct color for the correct slot, you get a "hit." If you guess a color that exists but is in the wrong slot,
you get a "pseudo-hit." Note that a slot that is a hit can never count as a pseudo-hit. 

For example, if the actual solution is RGBY and you guess GGRR, you have one hit and one pseudo-hit. 

Write a method that, given a guess and a solution, returns the number of hits and pseduo-hits.
*/

#include <assert.h>
#include <iostream>
#include <string>
using namespace std;

struct Result
{
	int hits;
	int phits;
};

Result process(string guess, string solution);

int main()
{
	Result test = process("GGRR", "RGBY");
	assert(test.hits == 1 && test.phits == 1);
	test = process("GGGG", "RGGB");
	assert(test.hits == 2 && test.phits == 0);
	test = process("RGBY", "YRGB");
	assert(test.hits == 0 && test.phits == 4);
	cout << "Passed all tests." << endl;
}

/*
Parameters:
	-guess: string that contains the user's guess, to be compared against the solution
	-solution: string that containts the solution stored in the machine
	Both parameters are strings of length 4 with capital letters 'R', 'G', 'B', or 'Y'
Return value:
	Returns a Result structure that contains two integers; one represents the number of hits, the other the number of pseudo-hits
*/
Result process(string guess, string solution)
{
	Result answer;
	answer.hits = 0;
	answer.phits = 0;
	int reds = 0;
	int greens = 0;
	int blues = 0;
	int yellows = 0;
	//Compute the number of actual hits
	for (size_t i = 0; i < guess.length(); i++)
	{
		if (guess[i] == solution[i]) answer.hits++;
		else
		{
			switch (solution[i])
			{
			case 'R':
				reds++;
				break;
			case 'G':
				greens++;
				break;
			case 'B':
				blues++;
				break;
			case 'Y':
				yellows++;
				break;
			}
		}
	}

	//Now we calculate the number of pseudo-hits, only adding the the number if we have any left in the "bank" we made for ourselves
	for (size_t j = 0; j < guess.length(); j++)
	{
		if (guess[j] == solution[j]) continue;
		else
		{
			switch (guess[j])
			{
			case 'R':
				if (reds > 0)
				{
					reds--;
					answer.phits++;
				}
				break;
			case 'G':
				if (greens > 0)
				{
					greens--;
					answer.phits++;
				}
				break;
			case 'B':
				if (blues > 0)
				{
					blues--;
					answer.phits++;
				}
				break;
			case 'Y':
				if (yellows > 0)
				{
					yellows--;
					answer.phits++;
				}
				break;
			}
		}
	}

	return answer;
}