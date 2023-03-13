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
    
    int n; cin>>n;
    int ans = 0;

    int a,b;

    while(n--){

        // you know the first and last element 
        // of a series
        // and the difference between two adjacent 
        // element is d.
        // then the sum = n/2[2a + (n – 1)d]

        cin>>a>>b;

        int nn = (b-a)+1;

        int mm = nn-1;

        int s = mm*(mm+1);
        s /= 2;

        s += (nn*a);

        ans += s;
    }

    cout << ans << endl;
    return 0;
}