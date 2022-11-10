#include <bits/stdc++.h>
using namespace std;

intmain()
{
    intt;
    cin >> t;

    while (t--)
    {
        intx;
        cin >> x;
        x = x % 4;
        string dir = "North";
        while (x--)
        {
            if (dir == "North")
            {
                dir = "East";
            }
            else if (dir == "East")
            {
                dir = "South";
            }
            else if (dir == "South")
            {
                dir = "West";
            }
            else if (dir == "West")
            {
                dir = "North";
            }
        }
            cout << dir << endl;
    }
    return 0;
}
