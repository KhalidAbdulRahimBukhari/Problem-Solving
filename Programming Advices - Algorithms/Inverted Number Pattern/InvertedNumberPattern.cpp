#include <iostream>
#include <string>
using namespace std;


int ReadPositiveNumber(string Message = "Enter a positive Number")
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


bool IsNumberPalindrome(int Number)
{

	return ReverseNumber(Number) == Number;

}

void PrintInvertedNumberPattern(int Number)
{
	for (int i = 0 ; i < Number ; i++)
	{

		for (int j = Number - i ; j >= 1; j--)
		{
			cout << Number;
		}

		cout << "\n";
	}


}


int main()
{
	PrintInvertedNumberPattern(ReadPositiveNumber());

	system("pause");
}