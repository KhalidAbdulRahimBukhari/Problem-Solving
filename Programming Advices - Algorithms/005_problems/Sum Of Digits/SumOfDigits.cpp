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


int GetSumOfDigits(int Number)
{

	int sum = 0;

	while (Number > 0)
	{
		sum += Number % 10;
		Number = Number / 10;
	}

	return sum;
}


int main()
{
	cout << "Sum of digits is : " 
		<< GetSumOfDigits(ReadPositiveNumber("Please enter a positive number"));

}