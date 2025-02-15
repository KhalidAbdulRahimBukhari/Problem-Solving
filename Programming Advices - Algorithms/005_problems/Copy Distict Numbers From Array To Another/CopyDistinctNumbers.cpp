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

void ReadNumbersDynamicallyToArray(int arr[100], int& length)
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

}
void PrintArray(int arr[100], int length)
{

	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

int FindNumberIndexInArray(int arr[100], int length, int Number)
{

	for (int i = 0; i < length; i++)
	{
		if (Number == arr[i])
			return i;
	}

	return -1;
}

bool IsNumberInArray(int arr[100], int length, int Number)
{
	return FindNumberIndexInArray(arr, length, Number) != -1 ? true : false;
}


void AddArrayelement(int Number, int arr[100], int& length)
{
	length++;
	arr[length - 1] = Number;
}



void AddDuplicateNumbersInArray(int arrSource[100], int arrDestenation[100], int SourceLength, int& DestenationLength)
{
	

	for (int i = 0; i < SourceLength; i++)
	{
		int number = arrSource[i];

		for (int j =  1 + i; j < SourceLength; j++)
		{
			if (number == arrSource[j] && !IsNumberInArray(arrDestenation,DestenationLength,number))
			{
				AddArrayelement(number, arrDestenation, DestenationLength);
				break;
			}
		}
	}

}

void CopyDistinctElementsFromArrayToAnother(int arrSource[100], int arrDestenation[100], int SourceLength, int& DestenationLength)
{


	for (int i = 0; i < SourceLength; i++)
	{
		if (!IsNumberInArray(arrDestenation, DestenationLength, arrSource[i]))
		{
			AddArrayelement(arrSource[i], arrDestenation, DestenationLength);
		}
	}

}



int main()
{
	srand(time(0));

	int arrSource[100], SourceLength = 0, arrDestenation[100], DestinationLength = 0;

	ReadNumbersDynamicallyToArray(arrSource, SourceLength);


	cout << "Array elements are : ";
	PrintArray(arrSource, SourceLength);

	AddDuplicateNumbersInArray(arrSource, arrDestenation, SourceLength, DestinationLength);
	cout << "Array elements after copy distinct are : ";
	PrintArray(arrDestenation, DestinationLength);




	system("pause");
}