#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++){
        int n,sum=0;
        map<int,int> mp;

        scanf("%d",&n);

        int arr[n];
        for(int j=0;j<n;j++)
            scanf("%d",&arr[j]);

        for(int j=n-1;j>=0;j--){
            if((!mp[arr[j]])||(!mp[-1*arr[j]])){
                sum+=arr[j];

                mp[arr[j]]=1;
                mp[-1*arr[j]]=1;
            }
        }
        printf("Case %d: %d\n",i,sum);

    }

    return 0;
}