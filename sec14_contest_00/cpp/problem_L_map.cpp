#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,count=0;
    scanf("%d",&n);

    map<int,int> mp;

    int a, maxx=0;

    for(int i=0;i<n;i++){
        scanf("%d",&a);

        maxx = max(maxx,a);
        mp[a]++;

    }

    printf("%d\n",mp[maxx]);

    return 0;
}