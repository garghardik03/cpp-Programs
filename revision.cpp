#include<bits/stdc++.h>
using namespace std;
intmain(){
    intt;
    cin>>t;
    while(t--){
      intn;
        cin>>n;
        intd=0;
        inte=0;
        if(n%2==0){
            cout<<"0"<<endl;
            break;
        }
         d=n%2;
         e= n-d;
        if(e%2==0){
            cout<<"1"<<endl;
        }

    }
return 0;
}