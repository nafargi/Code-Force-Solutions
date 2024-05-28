#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;char ch;string s;
    cin>>n>>ch>>s;
    s+=s;
    int sum=0,cnt=0;
    for(int i=0;i<s.size();i++){
        if(sum!=0){
            if(s[i]!='g') sum++;
            else sum=0;
        }
        else{
            if(s[i]==ch && s[i]!='g') sum++;
        }
        if(sum>cnt) cnt=sum;
    }
    cout<<cnt<<endl;
}

signed main()
{
    int t;cin>>t;
    while(t--){
        solve();
    }
}
