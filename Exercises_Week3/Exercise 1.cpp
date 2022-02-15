#include <iostream> 

using namespace std;


int main()
{
	float  arr[10], avg = 0.0, cls, pcls;
	int count = 0;
	cout << "Enter 10 float numbers: ";
	for (int i = 0; i < 10; i++)
	{
		cout << "\n" << i + 1 << ": ";
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i++)
	{
		avg += arr[i];
	}
	avg /= 10;
	pcls = arr[0] - avg;
	if (pcls < 0)
		pcls *= -1;
	for (int i = 1; i < 10; i++)
	{
		cls = arr[i] - avg;
		if (cls < 0)
			cls *= -1;
		if (cls < pcls)
		{
			count = i;
			pcls = cls;
		}
	}
	cout << "\navg: " << avg << "\nCloser to the average: " << arr[count];
}