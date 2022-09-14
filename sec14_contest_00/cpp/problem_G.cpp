#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int testcase;
    scanf("%d",&testcase);
 
    while(testcase--){

        int n,count=0,condition=0;
        scanf("%d",&n);

        char string[n+1];
        scanf("%s",string);

        for(int i=0;i<n;i++){
            if(string[i]=='a' || string[i]=='e' || string[i]=='i'||string[i]=='o'||string[i]=='u')
                count=0;
            else count+=1; 
            if(count==4){
                condition = 1;
                break;
            }                   
        }

    if(condition) printf("NO\n");
    else printf("YES\n"); 
    }


    return 0;
}