//Qestion 17.9 in Cracking the Coding Interview

/*
Design a method to find the frequency of occurrences of any given word in a book.
*/

//Assume that a book is represented by an array of strings

#include <assert.h>
#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

unordered_map<string, int> initTable(vector<string> book);
int getFrequency(unordered_map<string, int> reference, string word);

int main()
{
	vector<string> test;
	test.push_back("Hello");
	test.push_back("This");
	test.push_back("test");
	test.push_back("is");
	test.push_back("a");
	test.push_back("test");
	unordered_map<string, int> table = initTable(test);
	assert(getFrequency(table, "test") == 2);
	assert(getFrequency(table, "Hello") == 1);
	assert(getFrequency(table, "James") == 0);
	cout << "Passed all tests." << endl;
}

/*
Parameters:
	-book: the vector of strings that make up the book. It is assumed that each element in the vector represents a word.
Return value: 
	a hash table/unordered map that maps every word in the book to its frequency
*/
unordered_map<string, int> initTable(vector<string> book)
{
	unordered_map<string, int> frequencyChart;
	for (int i = 0; i < book.size(); i++)
	{
		unordered_map<string, int>::iterator it = frequencyChart.find(book[i]);
		if (it == frequencyChart.end())
		{
			frequencyChart.insert(pair<string, int>(book[i], 1));
		}
		else
		{
			it->second++;
		}
	}
	return frequencyChart;
}

/*
Parameters:
	reference: frequency chart to consult
	word: word to search
Return value:
	integer representing the frequency that the word appears in the book
*/
int getFrequency(unordered_map<string, int> reference, string word)
{
	auto it = reference.find(word);
	if (it == reference.end()) return 0;
	else return it->second;
}