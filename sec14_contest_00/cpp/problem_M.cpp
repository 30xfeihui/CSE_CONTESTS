#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testcase;
    scanf("%d",&testcase);

    while(testcase--){
        int n,total;
        scanf("%d %d",&n,&total);

        int a; // without array
        while(n--){
            scanf("%d",&a);
            if(a<=total){
                printf("1");
                total-=a;
            }
            else
                printf("0");
        }
        printf("\n");
    }
}


// with array
/*

    int testcase;
    scanf("%d",&testcase);

    while(testcase--){
        int n,total;
        scanf("%d %d",&n,&total);

        int a[n]; // with array
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }

        for(int i=0;i<n;i++){
            if(a[i]<=total){
                printf("1");
                total-=a[i];
            }
            else
                printf("0");
        }
        printf("\n");
    }

*/