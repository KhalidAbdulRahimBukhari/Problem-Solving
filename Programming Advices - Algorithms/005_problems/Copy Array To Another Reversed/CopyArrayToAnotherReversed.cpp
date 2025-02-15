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



void CopyArrayReversed(int arrSource[100], int arrDestination[100], int length)
{
	for (int i = 0; i < length; i++)
	{
		arrDestination[i] = arrSource[length - 1 -i];
	}
}


int main()
{
	srand(time(0));

	int arr[100], length = 0, arr2[100];

	FillArrayWithRandomNumbers(arr, length);

	cout << "\n\nArray 1 Elements : \n";
	PrintArray(arr, length);



	CopyArrayReversed(arr, arr2, length);

	cout << "\n\nArray 2 Elements After Copy Reversed : \n";
	PrintArray(arr2, length);


	system("pause");
}