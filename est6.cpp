#include<iostream>
#include<cstring>
using namespace std;
intmain(){
    inta=1;
    intb=1;
    intc= a||--b;
    intd= a-- && --b;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    return 0;
}