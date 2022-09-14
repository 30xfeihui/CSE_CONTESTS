#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int testcase;
    scanf("%d",&testcase);

    for(int i=1;i<=testcase;i++){
        int array[3];

        scanf("%d %d %d", &array[0],&array[1],&array[2]);
        sort(array,array+3);

        printf("Case %d: %d\n",i,array[1]);
    }


    return 0;
}