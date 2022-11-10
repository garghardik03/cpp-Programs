#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
intmain(){
    fstream file1;
    char ch;
    file1.open("Ss.txt",ios::app);
    if(!file1){
        cout<<"File not found";
        return 0;
    }
    cout<<"File is created"<<endl;
    while(1){
        cin>>ch;
        file1.put(ch);
        file1<<"\t";
        if(ch=='.'){
            break;
        }
        if(ch=='.'){
            file1<<"\n";
        }
    }
return 0;
}