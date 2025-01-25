#include <iostream>

using namespace std;

void PrintHeader()
{
	cout << "\t\t\t Multiplication Tbale From 1 to 10\n\n";

	for (int i = 1; i <= 10; i++)
	{
		cout << "\t" << i;
	}

	cout << "\n\n_____________________________________________________________________________________________";
}

void PrintMultiplicationTable()
{
	PrintHeader();
	for (int i = 1; i <= 10; i++)
	{
		if(i == 10)
	    cout << "\n" << i << "    | ";
		else
		cout << "\n" << i << "     | ";

		for (int j = 1; j <= 10; j++)
		{

			cout << i * j << "\t";

		}

	}
}


int main()
{

	PrintMultiplicationTable();

}

