#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,d,i=0; // here i indicates index
    scanf("%d %d",&n,&k);

    map<int,int> mp; // map to keep track if a number appeared before 
    vector<int> index; // to store index number

    while(n--){
        scanf("%d",&d);
        if(!mp[d]) index.push_back(i);  // if d is not seen before then we store i
        mp[d]++; // d is now seen
        i++;
    }

    if(mp.size()<k) printf("NO"); 
    else{
        printf("YES\n");
        for(i=0;i<k;i++) printf("%d ",index[i]+1);
    }
    printf("\n");
    return 0;
}
