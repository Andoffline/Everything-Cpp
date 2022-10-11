#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int n;
	double item;
	stack<double> numbers;

	cout << "Enter an integer n followed by n real numbers" << endl;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> item;
		numbers.push(item);
	}

	cout << endl << endl << "Numbers in reverse:";
	while (!numbers.empty())
	{
		cout << numbers.top() << " ";
		numbers.pop();
	}
	return 0;
}

