#include<iostream>
using namespace std;

class Test { 
    static intx;   
public: 
    static inty;    
    int func(intx)       {  // We can access class's static variable even if there is a local variable 
       cout << "value of static x is " << Test::x; 
       cout << "\nvalue of local x is " << x;   
    	}
    static int getcount(){
        cout<<"Static function called"<<endl;
    } 
}; 
intTest::x = 1;           // In C++, static members must be explicitly defined like this 
intTest::y = 2; 
intmain() { 
    Test obj; 
    intx = 3 ; 
    obj.func(x); 
    cout << "\nTest::y = " << Test::y<<endl; 
    obj.Test::getcount();
    return 0; 
} 
