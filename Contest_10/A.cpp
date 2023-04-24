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

    vector<int> arr(3);
    string s;

    cin>>arr[0]>>arr[1]>>arr[2];
    cin>>s;

    sort(arr.begin(), arr.end());

    for(auto i: s){
        if(i=='A') cout << arr[0] << " ";
        else if(i=='B') cout << arr[1] << " ";
        else cout << arr[2] << " ";
    }

    return 0;
}