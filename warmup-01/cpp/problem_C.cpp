#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; scanf("%d",&t);
    
    while(t--){
        int n,m; scanf("%d %d",&n,&m);
        int limak=1,bob=2;
        int total_limak=0, total_bob=0;
        while(1){
            if(total_limak>n) {printf("Bob\n"); break;}
            if(total_bob>m) {printf("Limak\n"); break;}

            total_bob += bob; total_limak+=limak;
            limak+=2; bob+=2;
        }
        
    }
    return 0;
}
