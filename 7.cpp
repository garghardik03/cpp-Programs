#include<iostream>
using namespace std;
class y;
class x{
    inta;
    public:
        int setData(intp){
           a=p;
           cout<<"Constructor called"<<endl;
       }
        friend int add(x,y);
};
    class y{
        intb;
        public:
           int setData(intq){
           b=q;
           cout<<"Constructor called"<<endl;
       }
       friend int add(x,y);
          
    };
    int add(x c, y d){
        cout<<c.a+d.b;
    }
intmain(){
    x c;
    c.setData(3);
    y d;
    d.setData(4);
    add(c,d);
    return 0;
}