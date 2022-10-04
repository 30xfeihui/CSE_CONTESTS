#include <bits/stdc++.h>
using namespace std;

long long count_not_divided(long long n,long long k){
    return n-(n/k); 
}

long long binary(long long n, long long k){
    long long low = 1;
    long long high = 9223372036854775807; // maximum value of long long
    long long mid;

    while(low < high){

        mid = low+(high-low)/2;

        long long p = count_not_divided(mid,n);

        if(p<k) low = mid+1;
        else high = mid;

    }
    return low;
}   

int main()
{
    long long t; scanf("%lld",&t);
    while(t--){
        long long n,k;
        scanf("%lld %lld",&n,&k);

        long long ans = binary(n,k);

        printf("%lld\n",ans);
    }
    
    return 0;
}
