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

void InvertedLetterPatternV2(int Number)
{
	for (int i = 1; i <= Number; i++)
	{
		for (int j = 1 ; j <= i; j++)
		{
			cout << char(64 + i);
		}


		cout << "\n";
	}
}


int main()
{
	InvertedLetterPatternV2(ReadPositiveNumber());

	system("pause");
}