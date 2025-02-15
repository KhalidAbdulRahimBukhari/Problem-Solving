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


int GetNumberRevered(int Number)
{
	int reminder = 0, Number2 = 0;


	while (Number > 0)
	{
		reminder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + reminder;
	}

	return Number2;
}

int GetDigitFrequencyInANumber(int Number, int Digit)
{
	int Frequency = 0; int Remain = 0;

	while (Number > 0)
	{
		Remain = Number % 10;
		Number = Number / 10;
		if (Remain == Digit)
			Frequency++;
	}
	return Frequency;

}

int main()
{
	int Digit = ReadPositiveNumber("Inter the digit");
	int Number = ReadPositiveNumber("Enter the Number");


	cout << "Digit " << Digit << "Frequency is :" <<
		GetDigitFrequencyInANumber(Number,Digit);

}