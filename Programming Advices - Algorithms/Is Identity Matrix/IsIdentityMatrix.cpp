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

bool IsIdentityMatrix(int matrix[3][3], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i = j)
			{
				if (matrix[i][j] != 1)
					return false;
			}

			if (i != j)
			{
				if (matrix[i][j] != 0)
					return false;
			}
		}
	}

	return true;
}


int main()
{
	srand(time(0));


	int matrix[3][3] = {
		{1, 0, 0},
		{0, 1, 0},
		{0, 0, 1}
	};
	int	rows = 3, cols = 3;

	//FillMatrixWithRandomNumbers(matrix, rows, cols);

	cout << "The following is a 3X3 matrix 1 with random numbers : " << endl;
	PrintMatrix(matrix, rows, cols);

	
	if (IsIdentityMatrix(matrix, rows, cols))
	{
		cout << "Yes : Matrix is Identity\n";
	}
	else
	{
		cout << "No : Matrix is NOT Identity\n";
	}





	system("pause");
}