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

int digits(int n){
 
        int digit;
        if(n==0) digit = 1;
        else digit = floor(log10((double)n))+(int)1;
 
        return digit;
}

bool f(int n, int a, int b, int x){
 
        int yen = a*n + b*digits(n);
        return yen<=x;
}


int32_t main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;

 
    int a,b,x; cin>>a>>b>>x;
 
    int lo = 0;
    int hi = 1000000000;
 
    int ans = 0;
 
    while(lo<=hi){
        
        int mid = lo + (hi-lo)/2;
 
        int con = f(mid,a,b,x);
        if(con){
            ans = mid;
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
 
    }
 
    cout << ans << endl;
    return 0;
}