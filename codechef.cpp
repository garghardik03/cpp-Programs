#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n,0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if(a[0]==a[n-1] || a[1]==a[n-1] || a[0]==a[n-2])
        {
            cout << "YES" << endl;
            continue;
        }
        int flag=0;
        for(int i=0;i<n;i++){
            int y;
            int x=lower_bound(a.begin()+i+1,a.end(),a[i])-a.begin();
            if(a[x]==a[i] && x<n-1){
                y=lower_bound(a.begin()+x+1,a.end(),a[x+1])-a.begin();
            }
            if(y>=n-1){
                flag=1;
                cout<<"YES"<<endl;
                break;
            }
        }
        if(flag==0){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}