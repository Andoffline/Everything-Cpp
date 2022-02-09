#include <iostream>

using namespace std;
//Programm 2
//Write a program that prompts the user to enter two points(x1, y1) and (x2, y2) and
//display their distance.

int main()
{
	double x1, x2, y1, y2, d = 0;
	cout << "Enter x1 and y1:" << endl;
	cin >> x1 >> y1;
	cout << "Enter x2 and y2:" << endl;
	cin >> x2 >> y2; 
	d = pow((pow(x2 - x1, 2) + pow(y2 - y1, 2)), 0.5);//Math formula for counting distance between two points
	cout << "The distance between the points (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") is " << d << endl;
	return 0;
	
}