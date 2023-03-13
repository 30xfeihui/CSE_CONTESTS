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
    
    int n,q; cin>>n>>q;
    map<int, vector<int>> mp;
    // you can also use vactor<vector<int>>

    for(int i=1;i<=n;i++){
        int nn; cin>>nn;
        vector<int> arr(nn);
        for(auto &j: arr) cin>>j;

        mp[i] = arr;
    }

    for(int i=0;i<q;i++){
        int a,b; cin>>a>>b;

        cout << mp[a][b-1] << endl;
    }
    return 0;
}