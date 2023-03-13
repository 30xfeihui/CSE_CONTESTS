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
    
    int a,b,c,d; cin>>a>>b>>c>>d;

    int w,x,y,z;

    w = a*c;
    x = a*d;
    y = b*c;
    z = b*d;

    int ans = max({w,x,y,z});
    
    cout << ans << endl;
    return 0;
}