#include<iostream>
using namespace std;
class Base
{
protected:
    inta;

public:
    Base()
    {
        a = 9;
    }
    int display()
    {
        cout<<"The cout is" << a<<endl;
    }
};
class Derived1 : public Base
{
public:
Derived1{)
{ a=12;
}
};
intmain()
{
    Derivedl ob;
    ob.display();
    return 0;
}