#include <iostream>
using namespace std;
class A
{
    intid;
    static intcount;

public:
    A()
    {
        id = ++count;
        cout << "constructor for id"
    << id << endl;
    }
    ~A()
    {
    cout << "destructor for id " << id << endl;
    };
    intA::count;
    intmain()
    {
        A a[2];
        {
            A b;
        }
        return 0;
    }