#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m;
    scanf("%d",&t);

    while(t--){
        scanf("%d",&n); m=n;
	

	  // to check if n is round
        int round=0;
        if(n>=0 && n<=9) round=1;
        else{
            int non_zzero_count=0;
            while(n){
                if((n%10)>=1 && (n%10)<=9) non_zzero_count++;
                n/=10;
            }
            if(non_zzero_count==1) round=1;
        }



        n = m; // we changed n while checking round,
        vector<int> round_numbers; int mul=1;
        if(!round){
            int trail;
            while(n){
                trail = (n%10)*(mul);
                mul = mul*10;
                n = n/10;

                if(trail!=0) round_numbers.push_back(trail);
            }
        }

        if(round) printf("1\n%d\n",m);
        else {
            printf("%d\n",round_numbers.size());
            for(int i=0;i<round_numbers.size();i++)
                printf("%d ",round_numbers[i]);
            printf("\n");
        }
    }
    return 0;
}
