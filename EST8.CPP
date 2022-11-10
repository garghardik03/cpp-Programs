#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
intmain()
{
    vector<int> while;
    while.push_back(11);
    while.push_back(33);
    while.push_back(22);
    sort(while.begin(), while.end());
    vector<int>::iterator i;
    for (i = while.begin(); i != while.end(); ++i)
        cout << *i << endl;
    cout << “Max = “<< *max_element(while.begin(), while.end());
}
