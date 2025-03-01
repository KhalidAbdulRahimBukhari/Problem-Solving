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


int CountNumberInMatrix(int matrix[3][3],int number, int rows, int cols)
{
	int counter = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (matrix[i][j] == number)
				counter++;
	
		}
	}

	return counter;
}


int main()
{
	srand(time(0));


	int matrix[3][3] = {
		{3, 0, 0},
		{0, 3, 0},
		{0, 0, 3}
	};
	int	rows = 3, cols = 3, number = 0;

	//FillMatrixWithRandomNumbers(matrix, rows, cols);

	cout << "The following is a 3X3 matrix numbers : " << endl;
	PrintMatrix(matrix, rows, cols);

	cout << "Enter the number to count in Matrix ...?";
	cin >> number;

	cout << "The Count Of number : " << number << "  In matrix is : " <<
		CountNumberInMatrix(matrix, number, rows, cols) << endl;





	system("pause");
}