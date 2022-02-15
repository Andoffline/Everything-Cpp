#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool isArrEqual(int A[], int B[], int lenA, int lenB)
{
    if (lenA != lenB)
        return false;

    /* Sort both arrays */
    sort(A, A + lenA);
    sort(B, B + lenB);

    for (int i = 0; i < lenA; i++)
        if (A[i] != B[i])
            return false;


    return true;
}

int main()
{
    int A[100], B[100], n;
    bool check = true;
    cout << "Enter n:";
    cin >> n;
    cout << endl;
    if (n < 1 && n>100)
    {
        while (n < 1 && n>100)
        {
            cerr << "Wrong value of n,enter again:";
            cin >> n;
            cout << endl;
        }
    }
    cout << "Enter " << n << " numbers for the first array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "Enter " << n << " numbers for the second array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    for (int i = 0; i < 1; i++)
    {

        int n = sizeof(A[i]) / sizeof(int);

        int m = sizeof(B[i]) / sizeof(int);

        if (isArrEqual(A, B, n, m))

            cout << "Yes";

        else

            cout << "No";

    }

    return 0;
}