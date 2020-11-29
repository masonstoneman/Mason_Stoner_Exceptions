// Mason Stoner
//CIS 1202
// 11/30/2020

#include <iostream>

using namespace std;

char character(char, int);

int main()
{
	character('a', 1);
	character('a', -1);
	character('Z', -1);
	character('?', 5);
}

char character(char start, int offset) {

	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	string Alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char c;

	if (isalpha(start))
	{

		if (offset > 27)
		{
			cout << "invalidRangeException" << endl;
		}

		if (start == 'a', 'A' && offset == -1)
		{
			cout << "invalidRangeException" << endl;
		}

		if (isupper(start))
		{
			c = Alphabet[offset];
			cout << c << endl;
		}

		if (islower(start))
		{
			c = alphabet[offset];
			cout << c << endl;
		}

	}
	else cout << "invalidCharacterException" << endl;
}
