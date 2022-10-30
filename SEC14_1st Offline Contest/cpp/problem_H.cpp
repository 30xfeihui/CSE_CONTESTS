#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;
    
    string s; cin>>s;

    cout<<"0";
    for(int i=1;i<s.length();i++){
        if(s[i-1]=='1') cout<<"1";
        else cout<<'0';
    }

    return 0;
}