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

	char c;

	if (isalpha(start))
	{
		start + offset = c;
		if (isalpha(c))
		{
			cout << c << endl;
		}
		else cout << "invalidRangeExpedition" << endl;
		
	}
	else cout << "invalidCharaterException" << endl;
}
