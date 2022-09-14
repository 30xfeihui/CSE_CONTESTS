#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,count=0;
    scanf("%d",&n);

    int arr[n+1];

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int max = arr[0];
    for(int i=1;i<n;i++)
        if(max<arr[i])
            max=arr[i];

    for(int i=0;i<n;i++)
        if(arr[i]==max)
            count++;

    printf("%d\n",count);

    return 0;
}