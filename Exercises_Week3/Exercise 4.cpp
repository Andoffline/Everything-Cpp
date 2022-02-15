#include <iostream>
using namespace std;
int main()
{
    int array[] = { 18,8,12,4,6,14,1,10,9,3,5,2,0,7,16 };
    int size = sizeof(array) / sizeof(int);
    cout << "There is " << size << " elements in the array" << endl;
    cout << "Initial array:";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    int i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
    }
    cout << "Sorted array:";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}