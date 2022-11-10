
#include<iostream>

using namespace std;

intmain(){
    // cout<<"This is tutorial 9";
    intage;
    cout<< "Tell me your age"<<endl;
    cin>>age;
    switch (age)
    {
    case 18: 
        cout<<"You are 18"<<endl;
        break;
    case 22: 
        cout<<"You are 22"<<endl;
        break;
    case 2: 
        cout<<"You are 2"<<endl;
        break;

    default:
    cout<<"No special cases"<<endl;
        break;
    }

    cout<<"Done with switch case";
    return 0;
}
