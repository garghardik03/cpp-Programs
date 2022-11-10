#include<bits/stdc++.h>
using namespace std;
intmain(){
   intn;
    cin>>n;
    inta[n];
    for(inti=0;i<n;i++){
        cin>>a[i];
    }
    intans=2;
    intj=2;
    intpd= a[1]-a[0];
    intcurr=2;
    while(j<n){
        if(pd==a[j]-a[j-1]){
            curr++;
        }
        else{
            pd=a[j]-a[j-1];
            curr=2;
        }
         ans=max(ans,curr);
        j++;
    }
    cout<<ans<<endl;
return 0;
}