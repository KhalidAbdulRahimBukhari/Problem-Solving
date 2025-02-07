#include <iostream>
#include <string>
using namespace std;
enum enPrimNotPrime { Prime = 1, NotPrime = 2 };


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


enPrimNotPrime CheckPrime(int Number)
{
	int M = round(Number / 2);
	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0)
			return enPrimNotPrime::NotPrime;
	}
	return enPrimNotPrime::Prime;
}

void CopyPrimeElementsToArray(int arrSource[100], int arrDestination[100], int length, int& DestinationLength)
{
	for (int i = 0; i < length; i++)
	{
		if (CheckPrime(arrSource[i]) == enPrimNotPrime::Prime)
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

	CopyPrimeElementsToArray(arrSource, arrDestenation, SourceLength, DestinationLength);

	cout << "Array 2 elements after copying only Prime numbers are : ";
	PrintArray(arrDestenation, DestinationLength);



	system("pause");
}