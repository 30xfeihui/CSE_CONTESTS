#include <bits/stdc++.h>
using namespace std;
#define int int64_t

/**
 * 
 * 9XZER0
 * 
 * **/
int32_t main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;

    int n,p,q,r,s; cin>>n>>p>>q>>r>>s;
    vector<int> arr(n);

    for(int i=0;i<n;i++) cin>>arr[i];

    p -= 1;
    q -= 1;
    r -= 1;
    s -= 1;

    for(int i=p;i<=q;i++){
        swap(arr[i], arr[r]);
        r++;
    }

    for(auto i: arr) cout << i << " ";
    cout << endl;

    return 0;
}
