#include <iostream>
#include <string>
using namespace std;


int GetRandomNumber(int from, int to)
{
	return  from + (rand() % (to - from + 1));
}

char randomSmallChar()
{
	return char( GetRandomNumber(97,122));
}

char randomCapitalChar()
{
	return char(GetRandomNumber(65, 90));
}

int randomDigit()
{
	return GetRandomNumber(48, 57);
}


char randomSpecialChar()
{
	return char(GetRandomNumber(32, 47));
}



int main()
{
	srand(time(0));

	cout << randomSmallChar() << endl;

	cout << randomCapitalChar() << endl;

	cout << randomDigit() << endl;

	cout << randomSpecialChar() << endl;





	system("pause");
}