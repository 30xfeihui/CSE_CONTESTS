#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int testcase;
    scanf("%d",&testcase);

    while(testcase--){

        int a,b,ans = 0;

        scanf("%d %d",&a,&b);
        ans = (a*10)+(b*90);

        printf("%d\n", ans);
    }


    return 0;
}