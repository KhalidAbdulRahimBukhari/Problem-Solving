#include <iostream>
#include <string>
using namespace std;


int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}


void PrintDigitsReversed(int Number)
{
	int reminder = 0;

	while (Number > 0)
	{
		reminder = Number % 10;
		Number = Number / 10;
		cout << reminder << "\t";

	}


}

int main()
{
	PrintDigitsReversed(ReadPositiveNumber("Please enter a positive number"));




}