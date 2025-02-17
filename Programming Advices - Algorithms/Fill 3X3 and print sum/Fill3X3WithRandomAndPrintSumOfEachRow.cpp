#include <iostream>
#include <string>
using namespace std;

int GetRandomNumber(int from, int to)
{
	return  from + (rand() % (to - from + 1));
}



void Fill2DimensionalArrWithRandom(int matrix[3][3], int rows, int cols)
{

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			matrix[i][j] = GetRandomNumber(1, 5);
		}
	}
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

void SumMatrixRowsInArray(int matrix[3][3], int arr[], int rows, int cols)
{
	int sum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum += matrix[i][j];
			
		}
		arr[i] = sum;
		sum = 0;
	}
}

int SumRow(int matrix[3][3], int RowNumber, int cols)
{
	int sum = 0;
	for (int j = 0; j < cols; j++)
	{
		sum += matrix[RowNumber][j];
	}
	return sum;
}



void PrintSumOfEachRow(int matrix[3][3] , int rows , int cols)
{
	for (int i = 0; i < rows; i++)
	{
		cout << "Sum of row " << i + 1 << "\t = " << SumRow(matrix, i, cols) << endl;
	}
}


int main()
{
	srand(time(0));


	int matrix[3][3], rows = 3, cols = 3;

	Fill2DimensionalArrWithRandom(matrix, rows,cols);

	cout << "The following is a 3X3 matrix with random numbers : " << endl;

	PrintMatrix(matrix, rows,cols);

	cout << "The following are the sum of each row in matrix : " << endl;
	PrintSumOfEachRow(matrix, rows, cols);



	system("pause");
}