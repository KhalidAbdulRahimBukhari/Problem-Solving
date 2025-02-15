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


bool IsNumberPalindrome(int Number)
{
	
	return ReverseNumber(Number) == Number;

}


int main()
{
	if (IsNumberPalindrome(ReadPositiveNumber("Enter a positive number")))
		cout << "Yes, number is palindrome\n";
	else
		cout << "No, Number is NOT palindrom\n";

	system("pause");
}