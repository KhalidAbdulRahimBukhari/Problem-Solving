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


int ReverseNumber(int Number)
{
	int Remainer = 0, Number2 = 0;

	while (Number > 0)
	{
		Remainer = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainer;
	}

	return Number2;
}


void PrintNumberInOrderFromLeftToRight(int Number)
{
	int Remain = 0;

	while (Number > 0)
	{
		Remain = Number % 10;
		Number = Number / 10;
		cout << Remain << "\n";
	}
}


int main()
{
	PrintNumberInOrderFromLeftToRight(ReverseNumber(ReadPositiveNumber("Enter a positive Number")));
}