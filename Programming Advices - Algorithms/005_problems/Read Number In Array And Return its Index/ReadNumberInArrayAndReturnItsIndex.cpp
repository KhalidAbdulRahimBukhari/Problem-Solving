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

int FindNumberIndexInArray(int arr[100], int length, int Number)
{

	for (int i = 0; i < length; i++)
	{
		if (Number == arr[i])
			return i;
	}

	return -1;
}

int main()
{
	srand(time(0));

	int arr[100], length = 0, Number;

	FillArrayWithRandomNumbers(arr, length);

	cout << "\n\nArray 1 Elements : \n";
	PrintArray(arr, length);

	cout << "\n\nPlease enter a number to search for : \n";
	cin >> Number;

	short index = FindNumberIndexInArray(arr, length, Number);

	if (index != -1)
	{
		cout << "Number you are looking for is : " << Number << endl;
		cout << "The Number found at  position : " << index << endl;
		cout << "The Number found in order : " << index + 1 << endl;
	}
	else
	{
		cout << "Number you are looking for is : " << Number << endl;
		cout << "Number Is NOT found : " << Number << endl;
	}

	system("pause");
}