#include<iostream>
#include<fstream>
using namespace std;
intmain()
{
    fstream datafile;
    char line[81];
    datafile.open("demofile.txt",ios::out);
    if(datafile.fail())
    {
        cout<<"File opening failed"<<endl;
        return 0;
    }
    datafile<<"hardik v"<<endl;
    datafile.close();
    return 0;
}