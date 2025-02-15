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
int main()
{
	cout << "Number Reversed is : \n" <<
		GetNumberRevered(ReadPositiveNumber("Please enter a positive number"));

}