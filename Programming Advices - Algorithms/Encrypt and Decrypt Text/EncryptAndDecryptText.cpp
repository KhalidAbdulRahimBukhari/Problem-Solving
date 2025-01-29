#include <iostream>
#include <string>
using namespace std;


int ReadPositiveNumber(string Message = "Enter a positive Number")
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

string Read3LettersCapital(string Message = "Enter a text")
{
	string Letters = "";

	cout << Message << endl;
	cin >> Letters;

	return Letters;
}


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


string EncryptText(string &Text, short EncryptionKey)
{

	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] + EncryptionKey);
	}

	return Text;

}

string DecryptText(string &Text, short EncryptionKey)
{

	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] - EncryptionKey);
	}

	return Text;

}


int main()
{
	short EncryptionKey = 2;

	string Text = "Mohammed";

	cout << "Text After encryption : " << EncryptText(Text, EncryptionKey) << endl;

	cout << "Text After Decryption : " << DecryptText(Text, EncryptionKey) << endl;

	system("pause");
}