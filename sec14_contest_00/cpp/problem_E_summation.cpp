#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int testcase;
    scanf("%d",&testcase);

    for(int i=1;i<=testcase;i++){
        int a,b,c;

        scanf("%d %d %d", &a,&b,&c);
        

        // max number among a,b,c
        int maxx = max(a,max(b,c));
        // min number among a,b,c
        int minn = min(a,min(b,c));

        int total_sum = a+b+c;
        int min_max_sum = minn+maxx;

        // if we substract min and max value from total sum, then
        // we will find medium value
        int medium = total_sum-min_max_sum;


        printf("Case %d: %d\n",i,medium);
    }


    return 0;
}