#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t; scanf("%d",&t);

    while(t--){

        int n; scanf("%d",&n);
        int keys[n];

        for(int i=0;i<n;i++)
            scanf("%d",&keys[i]);

        int m; string lock;
        for(int i=0;i<n;i++){
            cin>>m >> lock;
            for(int j=lock.length()-1;j>=0;j--){
                if(lock[j]=='D' && keys[i]==9) keys[i]=0;
                else if(lock[j]=='D' && keys[i]!=9) keys[i]++;
                else if(lock[j]=='U' && keys[i]==0) keys[i]=9;
                else if(lock[j]=='U' && keys[i]!=0) keys[i]--;
            }
        }

        for(int i=0;i<n;i++)
            printf("%d ",keys[i]);
        printf("\n");
    }
    
    return 0;
}
