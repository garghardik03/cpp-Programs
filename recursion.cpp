// check if an vy is sorted or not

/*#include<bits/stdc++.h>
using namespace std;
bool sort(intarr[],intn){
    if(n==1){
        return true;
    }
    bool rest= sort(arr+1,n-1);
    return(arr<=arr+1 && rest);
}
intmain(){
    intn;
    cin>>n;
    intarr[n];
    for(inti=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sort(arr,n)<<endl;
return 0;
} */


// remove all duplicates from a string

/*#include<bits/stdc++.h>
using namespace std;
string removeDup(string s){
    if(s.length()==0){
        return "";
    }
   char ch=s[0];
    string ans= removeDup(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return(ch+ans);
}
intmain(){
   cout<<removeDup("aaaabbbbccccddddeeee");
return 0;
}*/


// generate all substrings of a string

/*#include<bits/stdc++.h>
using namespace std;
int sub(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    sub(s.substr(1),ans);
    sub(s.substr(1),ans+ch);
}
intmain(){
    sub("abc","");
return 0;
}*/


// number of possible ways to cross a n*n maze 

#include<bits/stdc++.h>
using namespace std;
intways(intn,inti, intj){
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }
    intans= ways(n,i+1,j) + ways(n,i,j+1);
    return ans;
}
intmain(){
    cout<<ways(3,0,0);
return 0;
}


