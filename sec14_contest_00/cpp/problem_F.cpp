#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int x=0;
    int n;
    scanf("%d %*c",&n); // %*c is used for newline

    char operatorr[4];

    while(n--){
        scanf("%s",&operatorr);
        if(operatorr[1]=='+' || operatorr[0]=='+') x+=1;
        else if(operatorr[1]=='-' || operatorr[0]=='-') x-=1;
        
    }
    printf("%d\n",x);


    return 0;
}