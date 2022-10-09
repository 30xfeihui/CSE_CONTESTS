#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k; scanf("%lld %lld",&n,&k);
    vector<long long> vc(n);
    long long sum = 0;

    for(long long i=0;i<n;i++)
        scanf("%lld",&vc[i]);

    sort(vc.begin(),vc.end());

    for(long long i=n-1;i>=(n-k);i--) // i>=(n-k) is the last k element
        sum+=vc[i];
    printf("%lld\n",sum);
    return 0;
}
