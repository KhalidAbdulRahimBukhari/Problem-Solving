#include <iostream>
#include <string>
#include <cmath>
using namespace std;


float GetFraction(int number)
{
	return number - (int)number;
}


int MyRoundFunction(float number)
{
	int IntPart = (int)number;

	float Fraction = GetFraction(number);


	if (abs(Fraction) >= .5)
	{
		if (number > 0)
			return ++IntPart;
		else
			return --IntPart;

	}

	return IntPart;

}


int FloorNumberFunc(float number)
{

	if (number < 0)
		return --number;

	return (int)number;

}

int main()
{
	float number = 10.4;

	cout << "Number is : " << number << endl;

	cout << "Number floor is  : " << FloorNumberFunc(number) << endl;





	system("pause");
}