#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;
    
    int t,tt=1; cin>>t;
    while(t--){
        int n; cin>>n;
        int one = 0;

        while(n>0){
            if(n%2==1) one++;
            n/=2;
        }

        cout << "Case " << tt++ << ": ";
        if(one%2==1) cout << "odd" << endl;
        else cout << "even" << endl;

    }

    return 0;
}

/**

or you can use bit shifting

while(n>0){
    if(n&1) one++; // check if odd
    n = n>>1;
}

**/