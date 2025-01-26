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



void PrintAllDigitFrequencies(int Number)
{
	short Frequency = 0;

	for (int i = 1; i <= 9; i++)
	{
		Frequency = GetDigitFrequencyInANumber(Number, i);
		if (Frequency > 0)
		{
			cout << "Digit " << i << " Frequency is " << Frequency << " Time(s)\n\n";
		}
	}



}

int main()
{
	PrintAllDigitFrequencies(11222335);
}