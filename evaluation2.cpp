#include <iostream>
#include <fstream>
#include <string>
using namespace std;
intmain()
{
    fstream datahardik;
    string name;
    datahardik.open("evaluation.txt");
    if (!datahardik)
    {
        cout << "File not found" << endl;
    }
    cout << "THe file is opened" << endl;
    datahardik << "Ikjot" << endl;
    datahardik >> name;
    while (!datahardik.eof())
    {
        cout << name << endl;
        datahardik >> name;
        datahardik.close();
    }
    return 0;
}