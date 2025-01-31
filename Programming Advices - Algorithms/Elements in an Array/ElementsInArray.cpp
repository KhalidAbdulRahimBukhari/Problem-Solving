#include <iostream>
#include <string>
using namespace std;


void ReadArray(int arr[100], int &length)
{
	cout << "Enter Length of array\n";
	cin >> length;


	cout << "Enter array elements\n";

	for (int i = 0; i < length; i++)
	{
		cout << "Element [" << i +1 << "] : ";
		cin >> arr[i];
	}
}

void PrintArray(int arr[100], int length)
{
	cout << "\nOriginal Array : ";
	for (int i = 0; i < length; i++)
	{
		cout << arr[i];
	}

	cout << endl;
}

int TimesNumberRepeatedInArray(int arr[],int length, int Number)
{
	int Times = 0;

	for (int i = 0; i < length; i++)
	{
		if (arr[i] == Number)
			Times++;
	}

	return Times;
}



int main()
{
	int ArrLength , arr[100];
	


	ReadArray(arr, ArrLength);

	int Number = 0;
	cout << "\nEnter the number you want to check\n";
	cin >> Number;

	PrintArray(arr, ArrLength);

	cout << Number << " is repeated "
		<< TimesNumberRepeatedInArray(arr, ArrLength, Number)
		<< " Time(s)\n\n";

	

	system("pause");
}