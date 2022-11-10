#include<iostream>
using namespace std;
intmain(){
    inta,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<a<<endl;
    }
    else if(b>c && b>a){
        cout<<b<<endl;
    }
    else{
        cout<<c<<endl;
    }
    return 0;
}