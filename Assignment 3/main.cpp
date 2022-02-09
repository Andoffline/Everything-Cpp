#include <iostream>

using namespace std;
int getPentagonalNumber(int n)
{
	int i = 0;
	int number;
	while (n <= 100)
	{
		if (i % 11 == 0)
		{
			cout << endl;
			i++;
		}
		else
		{
			number = (n * (3 * n - 1)) / 2;
			cout << number << " ";
			n++;
			i++;
		}
	}
	return 0;
}
int reverse(int n)
{
	int reversedNumber = 0, remainder;
	while (n != 0) {
		remainder = n % 10;
		reversedNumber = reversedNumber * 10 + remainder;
		n /= 10;
	}
	cout << "Reversed Number = " << reversedNumber;
	return 0;
}
void pointInRectangle(double width, double height, double x, double y, bool &inRectangle)
{
	if (x >= (-(width / 2)) && x<=(width / 2) && y>=(-(height / 2)) && y <= (height / 2))
	{
		inRectangle = true;
	}
	else
	{
		inRectangle = false;
	}
}
int main()
{
	cout << "\tMENU"<<endl;
	cout << "1.University tuition" << endl;
	cout << "2.10 numbers per line program" << endl;
	cout << "3.PI approximation" << endl;
	cout << "4.Pentagonal number" << endl;
	cout << "5.Reverse of the integer number" << endl;
	cout << "6.Point inside the rectangle" << endl;
	cout << "0.To exit the program" << endl;
	int choice=1;
	cout << endl << endl;
	while (choice != 0)
	{
		cin >> choice;
		switch (choice)
		{
			case 1:
			{
				cout << "Tuition calculator" << endl;
				cout << "Welcome to the tuition calculator!" << endl;
				cout << "1 Compute the yearly tuition in x years from today" << endl;
				cout << "2 Compute the total tuition cost for y years from today" << endl;
				cout << "3 Compute yearly tuition and total tuition cost at the end of each year, for x years" << endl;
				cout << "0 Quit program" << endl;
				int choice;
				cout << endl;
				cout << "Enter choice:";
				cin >> choice;
				double tuition = 10000,temp=0,tuitionSum=0;
				switch (choice)
				{
				case 1:
				{
					cout << "You want to know the yearly tuition in how many years from today?";
					int year;
					cin >> year;
					for (int i = 0; i < year; i++)
					{
						tuition = tuition + (0.05 * tuition);
					}
					cout << "The yearly tuition after " << year << " years from today will be " << tuition;
				}
				case 2:
				{
					cout << "You want to know the total tuition cost after how many years from today?";
					int year;
					cin >> year;
					for (int i = 0; i < year; i++)
					{
						temp = tuition;
						tuitionSum += temp;
						tuition = tuition + (0, 05 * tuition);
					}
					cout << "The yearly tuition after " << year << " years from today will be " << tuitionSum;
				}
				case 3:
				{
					cout << "How many years you want to consider starting from today?";
					int year;
					cin >> year;
					for (int i = 1; i < year; i++)
					{
						temp = tuition;
						tuitionSum += temp;
						cout << "Year\tTuition\tTotal Tuition Cost at the End of Year" << endl;
						cout << i << "\t" << tuition << "\t" << tuitionSum << endl;
						tuition = tuition + (0, 05 * tuition);
					}
				}
				case 0:
				{
					cout << "Goodbye!";
					break;
				}
				}
				cout << endl;
				cout << "Enter point of menu to continue, 0 to exit the program" << endl;
				break;
			}
			case 2:
			{
				cout << "10 numbers per line"<<endl;
				int count=0,i=100;
				while (i<=1000)
				{
					if (count % 11 == 0)
					{
						cout << endl;
						count++;
					}
					if (i % 5 == 0 || i % 6 == 0)
					{
						cout << i << " ";
						count++;
						i++;
					}
					else
					{
						i++;
					}
				}
				cout << endl;
				cout << "Enter point of menu to continue, 0 to exit the program" << endl;
				break;
			}
			case 3:
			{
				int i = 3, x, count = 1;
				double PI, partial = 0;
				for (int num = 10000; num <= 100000; num += 10000)
				{
					while (i <= (2 * num + 1))
					{
						if (count % 2 == 1)
						{
							x = -i;
							count++;
						}
						else
						{
							x = i;
							count++;
						}
						partial = partial + (1.0 / x);
						i += 2;
					}
					PI = 4 * (1 + partial);
					cout<<"Approximation of Pi for "<<num<<" is " << PI << endl;
				}
				cout << endl;
				cout << "Enter point of menu to continue, 0 to exit the program" << endl;
				break;
			}
			case 4:
			{
				cout << "Pentagonal number" << endl;
				int n = 1;
				getPentagonalNumber(n);
				cout << endl;
				cout << "Enter point of menu to continue, 0 to exit the program" << endl;
				break;
			}
			case 5:
			{
				cout << "Enter an integer: ";
				int n;
				cin >> n;
				reverse(n);
				cout << endl;
				cout << "Enter point of menu to continue, 0 to exit the program" << endl;
				break;
			}
			case 6:
			{ 
				double width=1, height=1,x,y;
				bool inRectangle=true;
				cout << "Enter width and height of your rectangle:";
				cin >> width>>height;
				cout << endl;
				while (width < 0 || height < 0)
				{
					cout << "Error:wrong value of width or height,try again:";
					cin >> width >> height;
				}
				if (width == 0 && height == 0)
				{
					cout << "Program finished";
				}
				else
				{
					cout << "Enter coordinates x and y of your point:";
					cin >> x >> y;
				}
				cout << endl;
				while (width > 0 && height > 0)
				{
					pointInRectangle(width, height, x, y, inRectangle);
					if (inRectangle == true)
					{
						cout << "Your point is inside the rectangle"<<endl;
					}
					else
					{
						cout << "Your point is outside the rectangle"<<endl;
					}
					cout << "Enter width and height of your rectangle: ";
					cin >> width >> height;
					while (width < 0 || height < 0)
					{
						cout << "Error, negative numbers, please enter again: ";
						cin >> width >> height;
					}

					if (width == 0 && height == 0)
					{
						cout << "Program finished";
					}
					else
					{
						cout << "Enter coordinates x and y of your point: ";
						cin >> x >> y;
					}
				}
				
				cout << endl;
				cout << "Enter point of menu to continue, 0 to exit the program"<<endl;
				break;
			}
		}
	}
	cout << "Goodbye!";
	return 0;
}



