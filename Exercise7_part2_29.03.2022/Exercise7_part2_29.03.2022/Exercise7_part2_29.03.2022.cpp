#include <iostream>
#include<iomanip>
using namespace std;
void print(long long int n)
{
    if (n < 1000)
        cout << n;
    else
    {
        print(n / 1000);
        cout << ",";
        cout << setfill('0')<<setw(3)<<n % 1000;
    }
}
int digit(long long int n)
{
    int digit_num=0;
    
    return digit_num;
}
int main()
{
    long long int number;
    cout << "Your number:";
    cin >> number;
    cout << "\nFormated number:";
    print(number);
    cout << "\nNumber of digits:"<< digit(number);
    return 0;
}

