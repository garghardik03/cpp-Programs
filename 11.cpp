#include<iostream>
using namespace std;
class Complex{
    inta, b;
    
    public:
        int setNumber(intn1, intn2){
            a = n1;
            b = n2;
        }

        // Below line means that non member - sumComplex funtion is allowed to do anything with my private parts (members)
        int printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
        friend Complex sumComplex(Complex o1, Complex o2);
};
intmain(){
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b+o2.b))
    ;
    return o3;
}
