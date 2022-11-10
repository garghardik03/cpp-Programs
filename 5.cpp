#include <iostream>
using namespace std;
class complex
{
    inta, b;

public:
    int setData(intx, inty)
    {
        a = x;
        b = y;
        cout << "Constructor called" << endl;
    }
    int getData()
    {
        cout << "The complex number is " << a << " + i" << b << endl;
    }
    friend complex sumc(complex c1, complex c2);
};
complex sumc(complex c1, complex c2)
{
    complex c3;
    c3.setData((c1.a + c2.a), (c1.b + c2.b));
    return c3;
}
intmain()
{
    complex c1;
    complex c2;
    complex sum;
    intr, s;
    cin >> r;
    cin >> s;
    c1.setData(r, s);
    c1.getData();
    cin >> r;
    cin >> s;
    c2.setData(r, s);
    c2.getData();
    sum = sumc(c1, c2);
    sum.getData();
    return 0;
}