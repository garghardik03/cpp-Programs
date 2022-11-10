#include<iostream>
#include<cstring>
using namespace std;
intmain(){
    intx;
    int*p;
    int*q;
    p= new int[10];
    q=p;
    *p=4;
    for(intj=0;j<10;j++){
        x=*p;
        p++;
        *p=x+j;
    }
    for(intk=0;k<10;k++){
        cout<<*q<<" ";
        q++;
    }
    cout<<endl;
return 0;
}