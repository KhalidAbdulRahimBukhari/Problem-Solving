#include <iostream>
#include <string>
using namespace std;
enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

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

void CopyArray(int arrSource[100], int arrDestination[100], int length)
{
	for (int i = 0; i < length; i++)
	{
		arrDestination[i] = arrSource[i];
	}
}


void CopyPrimeNumbersFromArray(int arrSource[100], int arrDestination[100], int length , int &NewLength)
{

	for (int i = 0; i < length; i++)
	{
		if (CheckPrime(arrSource[i]) == enPrimNotPrime::Prime)
		{
			arrDestination[NewLength] = arrSource[i];
			NewLength++;
		}
	}
	NewLength--;
}


int main()
{
	srand(time(0));

	int arr[100], length = 0, arr2[100], length2 = 0;

	FillArrayWithRandomNumbers(arr, length);

	cout << "\n\nArray 1 Elements : \n";
	PrintArray(arr, length);


	CopyPrimeNumbersFromArray(arr, arr2, length, length2);


	cout << "\n\nArray 2 Elements After Copying Prime Numbers : \n";
	PrintArray(arr2, length2);


	system("pause");
}