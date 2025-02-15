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
		arr[i] = GetRandomNumber(-100, 100);
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

int NegativeInArray(int arr[100], int length)
{
	int count = 0;

	for (int i = 0; i < length; i++)
	{
		if (arr[i] < 0)
			count++;

	}

	return count;
}

int main()
{
	srand(time(0));

	int arr[100], length = 5;

	FillArrayWithRandomNumbers(arr, length);

	cout << "Array elements are : ";
	PrintArray(arr, length);

	cout << endl << endl;

	cout << "Number of Positive Numbers is : " << NegativeInArray(arr, length) << endl;




	system("pause");
}