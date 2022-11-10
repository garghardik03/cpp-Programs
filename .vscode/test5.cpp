#include<iostream>
#include<cstring>
using namespace std;
class Travel{
intdistance;
string source;
string destination;;
public:
int getData(string a,string b,intc){
source=a;
destination=b;
distance=c;
}
intfairCalculator(){
    intfair;
    if(distance<=5){
        fair=distance*3;
        return fair;
    }
    else if(distance>=6 && distance<=10){
        fair=distance*2;
        return fair;
    }
    else{
        fair=distance*1;
        return fair;
    }
}
int setData(){
    cout<<source<<endl;
    cout<<destination<<endl;
    intx;
    x= distance;
    cout<<x<<endl;
    cout<<fairCalculator()<<endl;
}
};
intmain()
{
 Travel p1;
 p1.getData("Delhi","Mumbai",10);
 p1.setData();
return 0;
}