#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; scanf("%d",&t);
    
    while(t--){
        int n,m; scanf("%d %d",&n,&m);
        int board[n][m];

        int pointer1,pointer2;
        int ans = -1,maxx = 0;

        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                scanf("%d",&board[i][j]);
    
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){

                pointer1 = i;
                pointer2 = j;
                // down_left
                while(1){
                    if(pointer1==n-1) break;
                    if(pointer2==0) break;
                    pointer1++; pointer2--;

                    maxx += board[pointer1][pointer2];
                }

                pointer1 = i;
                pointer2 = j;
                // down_right
                while(1){
                    if(pointer1==n-1) break;
                    if(pointer2==m-1) break;
                    pointer1++; pointer2++;

                    maxx += board[pointer1][pointer2];
                }

                pointer1 = i;
                pointer2 = j;
                // up_left
                while(1){
                    if(pointer1==0) break;
                    if(pointer2==0) break;
                    pointer1--; pointer2--;

                    maxx += board[pointer1][pointer2];
                }

                pointer1 = i;
                pointer2 = j;
                // up_right
                while(1){
                    if(pointer1==0) break;
                    if(pointer2==m-1) break;
                    pointer1--; pointer2++;

                    maxx += board[pointer1][pointer2];
                }

                maxx += board[i][j];
                ans = max(maxx,ans); maxx = 0;
            }
        }

        printf("%d\n",ans);
    }
    return 0;
}
