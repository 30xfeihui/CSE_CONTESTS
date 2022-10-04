#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; scanf("%d",&t);

    while(t--){ //testcase

        int n,m,d; scanf("%d",&n);
        map<int,int> mp;

        int max = -100;
        for(int i=0;i<n;i++){
            scanf("%d",&d); // input array elements as single 
            mp[d]++; // frequency of d 
        }

        for(auto i:mp) // iterate map where i is the inputed value d
            if(i.second>max) max = i.second;  // maximum frequency

        printf("%d\n",n-max); // total - maximum frequency
    }
    return 0;
}
