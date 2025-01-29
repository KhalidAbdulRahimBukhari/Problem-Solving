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
		for (int j = 1; j <= i; j++)
		{
			cout << char(64 + i);
		}


		cout << "\n";
	}
}


void PrintAllFromAAAToZZZ()
{
	string word = "";
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int z = 65; z <= 90; z++)
			{
				word += char(i);
				word += char(j);
				word += char(z);

				cout << word << endl;

				word = "";
			}

		}

		cout << "\n________________________________________\n";
	}

}


int main()
{
	PrintAllFromAAAToZZZ();

	system("pause");
}