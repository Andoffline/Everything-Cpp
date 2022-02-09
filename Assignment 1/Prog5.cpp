#include <iostream>

using namespace std;

int main()
{
	char c,c1;
	cout << "Enter an uppercase letter : ";
	cin >> c;
	if (int(c) < 65 || int(c)>90)
	{
		cout << "You entered a character which is not a letter or you entered a lowercase letter";
		return 0;
	}
	c1 = c + 32;
	cout << "The lowercase letter is : " << c1;
	return 0;
}