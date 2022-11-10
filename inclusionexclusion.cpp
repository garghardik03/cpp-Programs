#include<bits/stdc++.h>
using namespace std;
intdivisible(intn, inta, intb){
    intc1=n/a;
    intc2=n/b;
    intc3= n/(a*b);
    return (c1+c2-c3);
}
intmain(){
  intn;
  cin>>n;
    inta,b;
    cin>>a>>b;
    cout<<divisible(n,a,b)<<endl;
return 0;
}