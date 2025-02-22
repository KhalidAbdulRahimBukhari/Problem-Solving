#include <iostream>
#include <string>
using namespace std;

int GetRandomNumber(int from, int to)
{
	return  from + (rand() % (to - from + 1));
}

void FillMatrixWithOrderedNumbers(int matrix[3][3], int rows, int cols)
{
	int counter = 1;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			matrix[i][j] = counter;
			counter++;
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

void TransposeMatrix(int matrix[3][3],int MatrixTransposed[3][3], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			MatrixTransposed[i][j] = matrix[j][i];
		}
	}
}

int main()
{
	srand(time(0));


	int matrix[3][3], rows = 3, cols = 3;
	int TransposedMatrix[3][3];

	FillMatrixWithOrderedNumbers(matrix, rows, cols);

	cout << "The following is a 3X3 matrix : " << endl;

	PrintMatrix(matrix, rows, cols);

	TransposeMatrix(matrix, TransposedMatrix, rows, cols);



	cout << "The following is a 3X3 matrix Transposed : " << endl;
	PrintMatrix(TransposedMatrix, rows, cols);
	

	system("pause");
}