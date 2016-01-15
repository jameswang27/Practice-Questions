//Question 17.2 from Cracking the Coding Interview

/*
Design an algorithm to figure out if someone has won a game of tic tac toe.
*/

//I'm assuming that the 3x3 tic-tac-toe board is represented by a two dimensional array of integers. 
//0 represents empty
//1 represents player 1
//2 represents player 2

#include <assert.h>
#include <iostream>
using namespace std;

bool hasWon(int board[3][3]);

int main()
{
	int test[3][3] = { 0, 1, 2, 1, 1, 1, 2, 2, 1 };
	int test2[3][3] = { 0, 0, 0, 0, 0, 0, 1, 2, 1 };
	assert(hasWon(test));
	assert(!hasWon(test2));
	cout << "Passed all tests." << endl;
}

bool hasWon(int board[3][3])
{
	for (int i = 0; i < 3; i++) 
	{
		//Check rows
		if (board[i][0] != 0 && board[i][0] == board[i][1] && board[i][0] == board[i][2]) return true;
		//Check columns
		if (board[0][i] != 0 && board[0][i] == board[1][i] && board[0][i] == board[2][i]) return true;
	}

	//Check diagonal
	if (board[0][0] != 0 && board[1][1] == board[0][0] && board[2][2] == board[0][0]) return true;
	//Check reverse diagonal
	if (board[2][0] != 0 && board[1][1] == board[2][0] && board[0][2] == board[2][0]) return true;

	//No win detected
	return false;
}