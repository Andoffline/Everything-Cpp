#include <iostream>

using namespace std;

int main()
{
	double n;
	cout << "Enter n:";
	cin >> n;
	cout << endl;
	cout << n << " raised in the power of 1: "<< pow(n, 1) << endl;
	cout << n << " raised in the power of 2: "<< pow(n, 2) << endl;
	cout << n << " raised in the power of 3: "<< pow(n, 3) << endl;
	cout << n << " raised in the power of 4: "<< pow(n, 4) << endl;
	cout << n << " raised in the power of 5: "<< pow(n, 5) << endl;
	return 0;
}