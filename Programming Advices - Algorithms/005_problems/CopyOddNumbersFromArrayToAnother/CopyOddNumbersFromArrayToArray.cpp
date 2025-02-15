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

void AddArrayElement(int Number, int arr[100], int& length)
{
	length++;
	arr[length - 1] = Number;
}


void CopyOddElementsToArray(int arrSource[100], int arrDestination[100], int length, int& DestinationLength)
{
	for (int i = 0; i < length; i++)
	{
		if(arrSource[i] % 2 != 0)
		AddArrayElement(arrSource[i], arrDestination, DestinationLength);
	}
}


int main()
{
	srand(time(0));

	int arrSource[100], SourceLength = 0, arrDestenation[100], DestinationLength = 0;

	FillArrayWithRandomNumbers(arrSource, SourceLength);

	cout << "Array length is : " << SourceLength << endl;

	cout << "Array elements are : ";
	PrintArray(arrSource, SourceLength);

	CopyOddElementsToArray(arrSource, arrDestenation, SourceLength, DestinationLength);

	cout << "Array 2 elements after copying only odd numbers are : ";
	PrintArray(arrDestenation, DestinationLength);



	system("pause");
}