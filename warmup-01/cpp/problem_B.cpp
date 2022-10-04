#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);

    while(k--){ // operate k times
        if(!(n%10)) n=n/10;
        else n--;
    }
    printf("%d\n",n);
    
    return 0;
}


/**

if(!(n%10)) and if((n%10)==0) is same

**/