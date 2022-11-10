#include <iostream>
using namespace std;

class example
{
private:
    inta, b;

public:
    example();          // Default Constructor
    example(int, int);  // Parameterized Constructor
    example(example &); // Copy Constructor
    int display();
};

example::example()
{
    cout<<"Constructor is called"<<endl;
}

example::example(intx, inty)
{
    a = x;
    b = y;
}
example::example(example &p)
{
    a = p.a;
    b = p.b;
}
int example::display()
{
    cout << a << endl
         << b;
}
intmain()
{
    example e1;
    example e2(4, 5);
    example e3(e2);
    e3.display();
    return 0;
}