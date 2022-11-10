#include <iostream>
using namespace std;
intmain()
{
    intn;
    cin >> n;
    for (inti = 1; i <= n; i++)
    {
        for (intj = 1; j <= i; j++)
        {
            cout << "*";
        }
        intspace = 2 * n - 2 * i;
        for (intj = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (intj = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (inti = n; i >= 1; i--)
    {
        for (intj = 1; j <= i; j++)
        {
            cout << "*";
        }
        intspace = 2 * n - 2 * i;
        for (intj = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (intj = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}