//SOLVED
/* Write a function that takes a number and returns the highest prime factor of that number.*/
#include <iostream>
#include <algorithm>

using namespace std;

int maxPrimeFactor(int value);

int main()
{
	cout << "24: " << maxPrimeFactor(24) << endl;
	cout << "35: " << maxPrimeFactor(35) << endl;
	cout << "1: " << maxPrimeFactor(1) << endl;
	cout << "73: " << maxPrimeFactor(73) << endl;
	cout << "625: " << maxPrimeFactor(625) << endl;
}

int maxPrimeFactor(int value)
{
	if (value <= 1) return -1;

	int maximum = value;

	for (int i = 2; i <= value/i; i++)
	{
		if (value % i == 0)
		{
			maximum = max(maxPrimeFactor(i), maxPrimeFactor(value / i));
		}
	}

	return maximum;
}