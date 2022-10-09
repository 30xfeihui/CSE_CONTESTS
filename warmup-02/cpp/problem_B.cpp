#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);

    map<long long,int> mp;
    long long d;

    while(n--){
        scanf("%lld",&d);
        mp[d] = 1;
    }
    printf("%d\n",mp.size());
    
    return 0;
}