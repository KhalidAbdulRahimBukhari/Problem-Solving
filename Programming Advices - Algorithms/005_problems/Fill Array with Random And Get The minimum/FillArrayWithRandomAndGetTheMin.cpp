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


int GetMinNumberInArray(int arr[100], int length)
{
	int Min = arr[0];
	for (int i = 1; i < length; i++)
	{
		if (arr[i] < Min)
			Min = arr[i];
	}

	return Min;

}


int main()
{
	srand(time(0));

	int arr[100], length = 0;

	ReadArray(arr, length);

	PrintArray(arr, length);


	cout << "Min elements is  : " << GetMinNumberInArray(arr, length) << endl;

	system("pause");
}