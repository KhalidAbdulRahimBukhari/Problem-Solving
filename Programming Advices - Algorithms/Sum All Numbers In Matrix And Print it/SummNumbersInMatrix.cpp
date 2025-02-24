#include <iostream>
#include <string>
using namespace std;

int GetRandomNumber(int from, int to)
{
	return  from + (rand() % (to - from + 1));
}

void FillMatrixWithRandomNumbers(int matrix[3][3], int rows, int cols)
{

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			matrix[i][j] = GetRandomNumber(1, 5);
		}
	}
}


int SumNumbersInMatrix(int matrix[3][3], int rows, int cols)
{
	int sum = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum += matrix[i][j];
		}
	}

	return sum;
}

void PrintMatrix(int matrix[3][3], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}


int main()
{
	srand(time(0));


	int matrix[3][3], rows = 3, cols = 3,
		arrSum[3];

	FillMatrixWithRandomNumbers(matrix, rows, cols);


	cout << "The following is a 3X3 matrix 1 with random numbers : " << endl;

	PrintMatrix(matrix, rows, cols);


	cout << "The sum of number in matrix is  : ";

	cout << SumNumbersInMatrix(matrix, rows, cols) << endl;



	system("pause");
}