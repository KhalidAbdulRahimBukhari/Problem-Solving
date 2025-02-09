#include <iostream>
#include <string>
using namespace std;

int GetRandomNumber(int from, int to)
{
	return  from + (rand() % (to - from + 1));
}

void FillArrayWithRandomNumbers(int arr[100], int& length)
{
	cout << "Enter Length of array\n";
	cin >> length;


	for (int i = 0; i < length; i++)
	{
		arr[i] = GetRandomNumber(1, 100);
	}
}

void PrintArray(int arr[100], int length)
{

	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

bool IsArrayPalyndrom(int arr[100], int length)
{
	int iterationNumber = length / 2 + 1;
	
	for (int i = 0; i < iterationNumber; i++)
	{
		if (arr[i] != arr[length - i -1])
			return false;

	}

	return true;
}

int main()
{
	srand(time(0));

	int arr[100] = { 10,20,30,20,10 }, length = 5;

	cout << "Array elements are : ";
	PrintArray(arr, length);

	if (IsArrayPalyndrom(arr, length))
	{
		cout << "\n Yes Array is palyndrom\n";
	}
	else
	{
		cout << "\n No Array Is NOT palyndrome\n";
	}

	




	system("pause");
}