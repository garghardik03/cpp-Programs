#include <iostream>
using namespace std;
class complex
{
    inta;
    intb;

public:
    int setData(intwhile, intv2)
    {
        a = while;
        b = v2;
    }

    int setDataBySum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    int printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};
class real : public complex
{
public:
    intx, y;
    intsum()
    {
        intc = x + y;
        return c;
    }
};

intmain()
{
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();

    real r1;
    r1.setData(4, 6);
    r1.sum();
    return 0;
}
