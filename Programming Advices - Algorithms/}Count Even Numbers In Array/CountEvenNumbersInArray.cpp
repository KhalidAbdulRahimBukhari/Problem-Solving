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

int EvenNumbersInArray(int arr[100], int length)
{
	int count = 0;

	for (int i = 0; i < length; i++)
	{
		if (arr[i] % 2 == 0)
			count++;

	}

	return count;
}

int main()
{
	srand(time(0));

	int arr[100] = { 10,20,30,20,10 }, length = 5;

	cout << "Array elements are : ";
	PrintArray(arr, length);

	cout << endl << endl;

	cout << "Number of Even Numbers is : " << EvenNumbersInArray(arr, length) << endl;




	system("pause");
}