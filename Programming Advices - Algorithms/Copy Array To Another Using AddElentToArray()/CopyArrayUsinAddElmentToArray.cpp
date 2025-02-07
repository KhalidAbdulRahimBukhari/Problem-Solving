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

void AddArrayelement(int Number, int arr[100], int& length)
{
	length++;
	arr[length - 1] = Number;
}

void ReadNumbersDynamicallyToArray(int arr[100], int& length)
{

	int number = 0;
	bool ReadMore = true;

	do
	{
		cout << "Please Enter a number " << endl;
		cin >> number;

		AddArrayelement(number, arr, length);

		cout << "Do you want to add more numbers ? yes : [1] , No : [0] " << endl;
		cin >> ReadMore;


	} while (ReadMore);

}

void CopyArrayUsindAddElement(int arrSource[100], int arrDestination[100], int length ,int &DestinationLength)
{
	for (int i = 0; i < length; i++)
	{
		AddArrayelement(arrSource[i], arrDestination, DestinationLength);
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

	CopyArrayUsindAddElement(arrSource, arrDestenation, SourceLength, DestinationLength);

	cout << "Array 2 elements after copy are : ";
	PrintArray(arrDestenation, DestinationLength);



	system("pause");
}