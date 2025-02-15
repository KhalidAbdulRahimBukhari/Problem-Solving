#include <iostream>
#include <string>
using namespace std;

enum enCharType {CapitalLetter = 0 , SmallLetter =1 , SpecialChar = 2 , Digit =3};


int GetRandomNumber(int from, int to)
{
	return  from + (rand() % (to - from + 1));
}

char GetRandomChar(enCharType charType)
{
	switch (charType)
	{
	case CapitalLetter:
		return char(GetRandomNumber(65, 90));
		break;
	case SmallLetter:
		return char(GetRandomNumber(97, 122));
		break;
	case SpecialChar:
		return char(GetRandomNumber(32, 47));
		break;
	case Digit:
		return char(GetRandomNumber(48, 57));
		break;
	default:
		break;
	}
}




int main()
{
	srand(time(0));




	system("pause");
}