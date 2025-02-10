#include <iostream>
#include <string>
#include <cmath>
using namespace std;


float MyAbsoluteFunction(float number)
{
	if (number >= 0)
		return number;

	return number * -1;
}

int main()
{
	float number = -10;

	cout << "Number is : " << number << endl;

	cout << "Number after abs function : " << MyAbsoluteFunction(number) << endl;





	system("pause");
}