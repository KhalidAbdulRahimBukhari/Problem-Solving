#include <iostream>
#include <string>
using namespace std;
enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

int GetRandomNumber(int from, int to)
{
	return  from + (rand() % (to - from + 1));
}




void FillArrayWithRandomNumbers(int arr[100], int length)
{
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

void Sum2ArraysInAnotherArray(int arr1[100], int arr2[100], int arrSum[100], int length)
{
	for (int i = 0; i < length; i++)
	{
		arrSum[i] = arr1[i] + arr2[i];
	}
}



int main()
{
	srand(time(0));

	int arr[100], length = 0;
	int arr2[100];
	int arrSum[100];

	cout << "\n\nEnter Length of array\n";
	cin >> length;

	FillArrayWithRandomNumbers(arr, length);
	cout << "\n\nArray 1 Elements : \n";
	PrintArray(arr, length);

	FillArrayWithRandomNumbers(arr2, length);
	cout << "\n\nArray 2 Elements : \n";
	PrintArray(arr2, length);

	Sum2ArraysInAnotherArray(arr, arr2, arrSum, length);

	cout << "\n\nArray 3 Elements (the sum of arr1 and arr2) : \n";
	PrintArray(arrSum, length);



	system("pause");
}