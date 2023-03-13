#include <bits/stdc++.h>
using namespace std;
#define int int64_t

/**
 * 
 * 
 * 9XZER0
 * 
 **/

int32_t main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;
    
    string s; cin>>s;

    string ans = s;

    if(s[s.length()-1]=='s')
        ans += "es";
    else ans += "s";

    cout << ans << endl;
    
    return 0;
}