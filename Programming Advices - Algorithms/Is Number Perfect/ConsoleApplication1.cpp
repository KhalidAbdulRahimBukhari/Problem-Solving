#include <iostream>
#include <string>
using namespace std;
enum enPrimNotPrime { Prime = 1, NotPrime = 2 };


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

bool IsNumberPerfect(int number)
{
	int M = round(number / 2);
	int Divisors = 0;

	for (int i = 1; i <= M; i++)
	{
		if (number % i == 0)
			Divisors += i;
	}

	return Divisors == number;
}


void PrintResults(int number)
{
	if (IsNumberPerfect(number))
		cout << number << "  Is Perfect";
	else
		cout << number << "  Is NOT Perfect";
}

int main()
{
	PrintResults(ReadPositiveNumber("Please enter a positive number !!"));

}