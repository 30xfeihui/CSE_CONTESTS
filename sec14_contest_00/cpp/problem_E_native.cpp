#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int testcase;
    scanf("%d",&testcase);

    for(int i=1;i<=testcase;i++){
        int a,b,c;

        scanf("%d %d %d", &a,&b,&c);
        int medium=0;

        if ((a > b && a < c) || (a > c && a < b)) medium=a;
        else if((b > a && b <c) || (b < a && b > c)) medium=b;
        else medium=c;


        printf("Case %d: %d\n",i,medium);
    }


    return 0;
}