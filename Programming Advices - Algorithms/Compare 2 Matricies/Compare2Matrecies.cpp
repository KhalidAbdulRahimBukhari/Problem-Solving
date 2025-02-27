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


bool IsMatriciesEqual(int matrix[3][3],int matrix2[3][3], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (matrix[i][j] != matrix2[i][j])
				return false;
		}

	}

	return true;
}



int main()
{
	srand(time(0));


	int matrix[3][3], matrix2[3][3], rows = 3, cols = 3;

	FillMatrixWithRandomNumbers(matrix, rows, cols);

	cout << "The following is a 3X3 matrix 1 with random numbers : " << endl;
	PrintMatrix(matrix, rows, cols);

	FillMatrixWithRandomNumbers(matrix2, rows, cols);

	cout << "The following is a 3X3 matrix 2 with random numbers : " << endl;
	PrintMatrix(matrix2, rows, cols);

	if (IsMatriciesEqual(matrix, matrix2, rows, cols))
	{
		cout << "Yes : Matricies are equal\n";
	}
	else
	{
		cout << "No : Matricies are NOT equal\n";
	}





	system("pause");
}