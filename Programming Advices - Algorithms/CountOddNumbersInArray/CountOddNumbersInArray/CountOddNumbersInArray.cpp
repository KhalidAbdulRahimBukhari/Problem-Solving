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
	cout << "\nArray Elelements : ";
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}


int CoundOddNumbersInArray(int arr[100], int length)
{
	int OddCount = 0;
	for (int i = 0; i < length; i++)
	{
		if (arr[i] % 2 != 0)
			OddCount++;
	}

	return OddCount;
}


int main()
{
	srand(time(0));

	int arr[100], length = 0;

	FillArrayWithRandomNumbers(arr, length);

	PrintArray(arr, length);


	cout << "Odd Numbers Count is  : " << CoundOddNumbersInArray(arr, length) << endl;

	system("pause");
}