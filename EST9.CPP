// CPP program to demonstrate
// Overloading new and delete operator
// for a specific class
#include <iostream>
#include <stdlib.h>

using namespace std;
class student
{
    string name;
    intage;

public:
    student()
    {
        cout << "Constructor is called\n";
    }
    student(string name, intage)
    {
        this->name = name;
        this->age = age;
    }
    int display()
    {
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
    }
    int *operator new(size_t size)
    {
        cout << "Overloading new operator with size: " << size << endl;
        int *p = ::operator new(size);
        // int * p = malloc(size); will also work fine

        return p;
    }

    int operator delete(int *p)
    {
        cout << "Overloading delete operator " << endl;
        free(p);
    }
};

intmain()
{
    student *p = new student("Yash", 24);

    p->display();
    delete p;
}
