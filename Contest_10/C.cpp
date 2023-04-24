#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define endl "\n"
#define LSONE(x) ((x) & -(x))

/**
 * 
 * 
 * 9xZER0
 * 
 **/


int32_t main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;

    vector<bool> check(2001);
    
    int n; cin>>n;
    vector<int> arr(n);

    for(auto &i: arr) cin>>i;

    for(auto i: arr) check[i] = true;

    for(int i=0;i<2001;i++)
        if(!check[i]){
            cout << i << endl;
            break;
        }
    return 0;
}