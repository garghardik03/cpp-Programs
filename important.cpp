#include <bits/stdc++.h>
using namespace std;
intmain()
{
    intt;
    cin >> t;
    for (inti = 0; i < t; i++)
    {
        intn;
        cin >> n;
        inta[n] = {0};
        intb[n] = {0};
        intmin_time = 0, difference, i;
        for (inti = 0; i < n - 1; i++)
        {
            cin >> a[i];
            min_time += a[i];
            b[i] += a[i];
            a[i] = min_time;
        }
        for (i = 0; i < n - 1; i++)
        {
            difference = a[i] - b[i];
            if (difference > 0)
            {
                b[i + 1] += b[i] + difference;
            }
            else
            {
                b[i + 1] += b[i];
            }
        }
        cout << b[i] << endl;
    }
    return 0;
}