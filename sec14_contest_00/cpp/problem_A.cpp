#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int testcase;
    scanf("%d",&testcase); // input testcaae
 
    while(testcase--){ // same as for(int i=0;i<testcase;i++)

        int a,b,ans = 0;

        scanf("%d %d",&a,&b);
        ans = a*b;

        printf("%d\n", ans);
    }


    return 0;
}