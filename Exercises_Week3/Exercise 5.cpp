#include <iostream>
using namespace std;
int main()
{
    float A[500], summary = 0, mean, s_part = 0, s;
    srand(time(NULL));
    for (int i = 0; i < 500; i++)
    {
        A[i] = rand() % 1001;
    }
    for (int i = 0; i < 500; i++)
    {
        A[i] = A[i] / 1000;
        summary += A[i];
    }
    mean = summary / 500;
    cout << "Mean:" << mean << endl;
    cout << "Numbers which difference with the mean is less than 0.05:";
    for (int i = 0; i < 500; i++)
    {
        if ((mean - A[i]) < 0.05)
        {
            cout << A[i] << " ";
        }
    }
    cout << endl;
    for (int i = 0; i < 500; i++)
    {
        s_part += pow((A[i] - mean), 2);
    }
    s = pow((s_part / 500), 0.5);
    cout << "Standart Deviation:" << s;
    return 0;
}