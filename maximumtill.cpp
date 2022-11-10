#include<bits/stdc++.h>
#include<climits>
using namespace std;
intmain(){
    intn;
    cin>>n;
    inta[n];
    for(inti=0;i<n;i++){
        cin>>a[i];
    }
    intmx=0;
    for(inti=0;i<n;i++){
        mx=max(mx,a[i]);
        cout<<mx<<endl;
    }
return 0;
}