#include<bits/stdc++.h>
using namespace std;
intmain(){
   intn;
   cin>>n;
   inta[n];
    for(inti=0;i<n;i++){
         cin>>a[i];
    }
    for(inti=0;i<n;i++){
        intcurr=0;
        for(intj=i;j<n;j++){
            curr+=a[j];
            cout<<curr<<endl;
            }
        }
return 0;
}