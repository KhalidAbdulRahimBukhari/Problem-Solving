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




void InvertedLetterPattern(int Number)
{
	for (int i = 0; i < Number; i++)
	{
		for (int j =  Number - i ; j > 0; j--)
		{
			cout << char(64 + Number - i);
		}


		cout << "\n";
	}
}


int main()
{
	InvertedLetterPattern(ReadPositiveNumber());

	system("pause");
}