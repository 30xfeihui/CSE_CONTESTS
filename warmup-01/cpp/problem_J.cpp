#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; scanf("%d",&t);
   
    while(t--){
        int n; scanf("%d",&n);
        int d;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            scanf("%d",&d); mp[d]++;
        }

        if(mp.size()==n) printf("%d\n",n);
        else if((n-mp.size())%2) printf("%d\n",mp.size()-1);
        else printf("%d\n",mp.size());
    }
    return 0;
}