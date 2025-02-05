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

void ReadNumbersDynamicallyToArray(int arr[100],int& length)
{
	
	int number = 0;
	bool ReadMore = true;

	do
	{
		cout << "Please Enter a number " << endl;
		cin >> number;

		arr[length] = number;
		length++;

		cout << "Do you want to add more numbers ? yes : [1] , No : [0] " << endl;
		cin >> ReadMore;


	} while (ReadMore);

	length--;
}




int main()
{
	srand(time(0));

	int arr[100], length = 0, Number;

	ReadNumbersDynamicallyToArray(arr, length);

	cout << "Array length is : " << length << endl;

	cout << "Array elements are : "; 
	PrintArray(arr, length);
	
	

	system("pause");
}