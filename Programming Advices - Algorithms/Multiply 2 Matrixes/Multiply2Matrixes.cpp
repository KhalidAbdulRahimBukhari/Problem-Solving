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



void MytiplyMatrices(int matrix[3][3], int matrix2[3][3], int matrixMultiply[3][3], int rows, int cols)
{


	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			matrixMultiply[i][j] = matrix[i][j] * matrix2[i][j];
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


int main()
{
	srand(time(0));


	int matrix[3][3],matrix2[3][3],matrixMultiply[3][3], rows = 3, cols = 3,
		arrSum[3];

	FillMatrixWithRandomNumbers(matrix, rows, cols);
	FillMatrixWithRandomNumbers(matrix2, rows, cols);

	cout << "The following is a 3X3 matrix 1 with random numbers : " << endl;

	PrintMatrix(matrix, rows, cols);

	cout << "The following is a 3X3 matrix 2 with random numbers : " << endl;

	PrintMatrix(matrix2, rows, cols);


	MytiplyMatrices(matrix, matrix2, matrixMultiply, rows, cols);

	cout << "The following is a 3X3 matrix 1 * matrix 2 : " << endl;

	PrintMatrix(matrixMultiply, rows, cols);




	system("pause");
}