#include<bits/stdc++.h>
using namespace std;
intmain(){
     intn;
     cin>>n;
     inta[n];
        for(inti=0;i<n;i++){
            cin>>a[i];
        }
     intb[n];
     for(inti=0;i<n;i++){
         b[i]=a[n-i-1];
     }
        for(inti=0;i<n;i++){
            cout<<b[i]<<" ";
        }
return 0;
}