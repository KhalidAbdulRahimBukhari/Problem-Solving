#include <iostream>
#include <string>
using namespace std;




int GuessPassword(string Password)
{
	string word = "";
	int Trials = 0;


	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int z = 65; z <= 90; z++)
			{
				word += char(i);
				word += char(j);
				word += char(z);
				Trials++;

				if (word == Password)
					return Trials;
				word = "";
			}

		}
	}

}


int GetRandomNumber(int from , int to)
{
	return  from + (rand() % (to - from + 1));
}


int main()
{
	srand(time(0));

	cout << GetRandomNumber(1, 10) << endl;
	cout << GetRandomNumber(1, 10) << endl;
	cout << GetRandomNumber(1, 10) << endl;
	cout << GetRandomNumber(1, 10) << endl;



	system("pause");
}