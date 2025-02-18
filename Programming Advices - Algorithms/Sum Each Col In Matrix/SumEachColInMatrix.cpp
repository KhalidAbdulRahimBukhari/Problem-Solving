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

int SumCol(int Matrix[3][3], int colnumber, int rows)
{
	int sum = 0;
	for (int j = 0; j < rows; j++)
	{
		sum += Matrix[j][colnumber];
	}
	return sum;
}

void FillArrayWithSumOfColsInMatrix(int Matrix[3][3], int arrSum[3], int cols , int rows)
{
	for (int i = 0; i < cols; i++)
	{
		arrSum[i] = SumCol(Matrix, i, rows);
	}


}


void PrintSumOfEachCol2(int matrix[3][3], int rows, int cols)
{
	for (int i = 0; i < cols; i++)
	{
		cout << "Sum of row " << i + 1 << "\t = " << SumCol(matrix, i, rows) << endl;
	}
}


void PrintSumOfEachCol(int arr[3], int rows)
{
	for (int i = 0; i < rows; i++)
	{
		cout << "Sum of col " << i + 1 << "\t = " << arr[i] << endl;
	}
}

int main()
{
	srand(time(0));


	int matrix[3][3], rows = 3, cols = 3, 
		arrSum[3];

	Fill2DimensionalArrWithRandom(matrix, rows, cols);

	cout << "The following is a 3X3 matrix with random numbers : " << endl;

	PrintMatrix(matrix, rows, cols);

	FillArrayWithSumOfColsInMatrix(matrix, arrSum, cols,rows);
	cout << "The following are the sum of each row in matrix : " << endl;
	PrintSumOfEachCol(arrSum, rows);



	system("pause");
}