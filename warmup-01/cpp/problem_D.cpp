#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=0,d;
    scanf("%d",&n);

    map<int,int> mp; // to keep track of number if it is seen before

    vector<int> index(n); // to store inputed array

    vector<int> ans; // to store ans


    for(;i<n;i++){ // input array
        scanf("%d",&index[i]);
    }


    for(i=n-1;i>=0;i--){ // traverse array in reverse
        if(!mp[index[i]]) { // index[i] not seen before

		ans.push_back(index[i]); // store index[i] to ans

		mp[index[i]]=1; // mark index[i] seen
	   } 
    }


    printf("%d\n",ans.size()); // print size of ans vector
    for(i=ans.size()-1;i>=0;i--) printf("%d ",ans[i]); // print elements in reverse order
    printf("\n");
    
    return 0;
}
