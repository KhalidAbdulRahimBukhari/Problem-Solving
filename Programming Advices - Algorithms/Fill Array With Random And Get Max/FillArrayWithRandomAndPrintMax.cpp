#include <iostream>
#include <string>
using namespace std;

int GetRandomNumber(int from, int to)
{
	return  from + (rand() % (to - from + 1));
}



void ReadArray(int arr[100], int& length)
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

int GetMaxNumberInArray(int arr[100], int length)
{
	int max = 0;
	for (int i = 0; i < length; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}

	return max;

}


int main()
{
	srand(time(0));

	int arr[100], length = 0;

	ReadArray(arr, length);

	PrintArray(arr, length);


	cout << "Max elements is  : " << GetMaxNumberInArray(arr, length) << endl;

	system("pause");
}