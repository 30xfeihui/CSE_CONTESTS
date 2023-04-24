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

    int n; cin>>n;
    vector<int> arr(n), summ(n);
    for(auto &i: arr) cin>>i;

    sort(arr.begin(), arr.end());

    summ[0] = arr[0];
    for(int i=1;i<n;i++) summ[i] = summ[i-1]+arr[i];

    int ans = 0;
    
    for(int i=0;i<n-1;i++){
        int nn = n-i-1;
        int demi_sum = summ[n-1]-summ[i];

        ans += abs((nn*arr[i])-demi_sum);
    }

    cout << ans << endl;

    return 0;
}