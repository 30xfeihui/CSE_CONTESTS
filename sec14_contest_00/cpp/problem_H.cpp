#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int testcase;
    scanf("%d",&testcase);
 
    while(testcase--){

        int check_a,check_b;
        int pair_1_a,pair_1_b;
        int pair_2_a,pair_2_b;

        scanf("%d %d %d %d %d %d",&check_a,&check_b,&pair_1_a,&pair_1_b,&pair_2_a,&pair_2_b);
        
        if(((pair_1_a==check_a) && (pair_1_b==check_b)) || ((pair_1_a==check_b) && (pair_1_b==check_a)))
        printf("1\n");

        else if(((pair_2_a==check_a) && (pair_2_b==check_b)) || ((pair_2_a==check_b) && (pair_2_b==check_a)))
            printf("2\n");
        else
            printf("0\n");

    }


    return 0;
}