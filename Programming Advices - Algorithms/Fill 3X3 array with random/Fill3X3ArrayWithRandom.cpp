#include <iostream>
#include <string>
using namespace std;

int GetRandomNumber(int from, int to)
{
	return  from + (rand() % (to - from + 1));
}



void Fill2DimensionalArrWithRandom(int arr[3][3], int rows)
{

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			arr[i][j] = GetRandomNumber(1, 100);
		}
	}
}

void Print2DimArr(int arr[3][3], int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}



int main()
{
	srand(time(0));


	int arr[3][3], rows = 3;

	Fill2DimensionalArrWithRandom(arr, rows);

	cout << "The following is a 3X3 matrix with random numbers : " << endl;

	Print2DimArr(arr, rows);



	system("pause");
}