#include <bits/stdc++.h>
using namespace std;
#define int int64_t

/**
 * 
 * 
 * 9XZER0
 * 
 **/

int mod = 1000000007;

int32_t main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;
    
    int n; cin>>n;
    vector<int> arr(n), summ(n, 0);

    for(auto &i: arr){
        cin>>i;
    }
    
	// Prefix sum
    summ[0] = arr[0];
    for(int i=1;i<n;i++){
        summ[i] = summ[i-1]+arr[i];
        summ[i] = summ[i]%mod;
    }

    int ans = 0;
    
    for(int i=0;i<n;i++){

        int diff = summ[n-1] - summ[i];

        if(diff<=0) diff += mod; // why this ?
                                 // try -10%3
                                 // answer is 2, but cpp will give -1 

        ans += (diff*arr[i]);
        ans %= mod;


        // another way (a*b)%m = ((a%m)*(b%m))%m
        
    }

    cout << ans << endl;
    return 0;
}