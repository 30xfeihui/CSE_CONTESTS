#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;
    

    long long t; cin>>t; int i=1;

    while(t--){
        double n; cin>>n;
        
        double sq = 4*n*n;
        double pi = 2*acos(0.0);
        double ci = pi*n*n;

        double shade = (sq-ci);

        printf("Case %d: %.2lf\n",i++,shade);
    }

    return 0;
}

