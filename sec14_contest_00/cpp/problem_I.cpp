#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    scanf("%d",&n);

    int odd_count=0,even_count=0;
    int even_index,odd_index;

    int a; // without array
    for(int i=0;i<n;i++){
        scanf("%d",&a);

        if(a%2==0){
            even_count+=1;
            even_index=i;
        }
        else{
            odd_count+=1;
            odd_index=i;
        }
    }

    if(odd_count==1) printf("%d\n",odd_index+1);
    else if(even_count==1) printf("%d\n",even_index+1);

    return 0;
}


// with array

/*
    int n;
    scanf("%d",&n);

    int odd_count=0,even_count=0;
    int even_index,odd_index;

    int a[n]; // array
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            even_count+=1;
            even_index=i;
        }
        else{
            odd_count+=1;
            odd_index=i;
        }
    }

    if(odd_count==1) printf("%d\n",odd_index+1);
    else if(even_count==1) printf("%d\n",even_index+1);

*/