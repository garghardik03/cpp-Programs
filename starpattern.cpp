#include<iostream>
#include<cstring>
using namespace std;
intmain(){
    introws,columns;
    cin>>rows>>columns;
    for(inti=1;i<=rows;i++){
        for(intj=1;j<=columns;j++){
            if(i==1 || i==rows || j==1 || j==columns){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        }
return 0;
}