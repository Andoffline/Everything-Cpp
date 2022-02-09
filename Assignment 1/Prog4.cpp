#include <iostream>

using namespace std;

int main()
{
	char c;
	cout << "Enter a character:";
	cin >> c;
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "ASCII code for " << c << " is " << int(c) << endl;
		c++;
	}
	return 0;
}