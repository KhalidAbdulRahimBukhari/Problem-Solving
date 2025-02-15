#include <iostream>
#include <string>
using namespace std;

int GetRandomNumber(int from, int to)
{
	return  from + (rand() % (to - from + 1));
}


void Swap(int& A, int& B)
{
	int Temp;

	Temp = A;
	A = B;
	B = Temp;

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

void FillArrayFrom1ToN(int arr[100], int &N)
{
	cout << "Inter the number\n";
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		arr[i] = i + 1;
	}
}

void CopyArray(int arrSource[100], int arrDestination[100], int length)
{
	for (int i = 0; i < length; i++)
	{
		arrDestination[i] = arrSource[i];
	}
}

void ShuffleArray(int arr[100], int length)
{
	for (int i = 0; i < length; i++)
	{
		Swap(arr[GetRandomNumber(0, length - 1)], arr[GetRandomNumber(0, length - 1)]);
	}
}





int main()
{
	srand(time(0));

	int arr[100], length = 0;


	FillArrayFrom1ToN(arr, length);
	cout << "\n\nArray 1 Elements : \n";
	PrintArray(arr, length);


	ShuffleArray(arr, length);

	cout << "\n\nArray 1 Elements after shuffle : \n";
	PrintArray(arr, length);
	



	system("pause");
}