#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);

    vector<int> height(n); // same as 'int arr[n];'

    for(int i=0;i<n;i++)
        scanf("%d",&height[i]);

    int maxx = *max_element(height.begin(),height.end()); // find maximum element
    
    if(maxx<k) printf("0\n");
    else printf("%d\n",maxx-k);
    return 0;
}
