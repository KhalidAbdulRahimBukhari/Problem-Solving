#include <iostream>
#include <string>
using namespace std;

enum enCharType { CapitalLetter = 0, SmallLetter = 1, SpecialChar = 2, Digit = 3 };



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

string GenerateWord(enCharType chartype, short length)
{
	string word = "";

	for (int i = 1; i <= length; i++)
	{
		word += GetRandomChar(chartype);
	}


	return word;

}


string GenerateKey(enCharType chartype)
{
	string key = "";

	for (int i = 1; i <= 5; i++)
	{
		key += GenerateWord(chartype, 4) + "-";
	}

	key = key.substr(0, key.size() - 1);

	return key;
}

void GenerateKeys(enCharType chartype, short keys)
{
	for (int i = 1; i <= keys; i++)
	{
		cout << "Key[" << i << "] : " << GenerateKey(chartype) << endl;
	}


}


void FillArrayWithKeys(string arr[100], int &length)
{
	cout << "Enter Length of array\n";
	cin >> length;


	for (int i = 0; i < length; i++)
	{
		arr[i] = GenerateKey(enCharType::CapitalLetter);
	}
}


void PrintArray(string arr[100], int length)
{

	for (int i = 0; i < length; i++)
	{
		cout << "Array [" << i << "] : " << arr[i] << endl;
	}

	cout << endl;
}




int main()
{
	srand(time(0));

	string arr[100];
	int length = 0;

	FillArrayWithKeys(arr, length);


	cout << "Array Elements : \n\n\n";
	PrintArray(arr, length);


	system("pause");
}