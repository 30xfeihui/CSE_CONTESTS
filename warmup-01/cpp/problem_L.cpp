#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; scanf("%d",&n);
    vector<int> step;
    int d, previous=-1;
    int stair=0;

    for(int i=0;i<n;i++){
        scanf("%d",&d);

        if(d==1) stair++; // if d is 1 then new stair starts
        if(d==1 && previous!=-1) step.push_back(previous); // store last element before 1
        if(i==n-1) step.push_back(d); // store the last element
        previous = d;
    }
    printf("%d\n",stair);
    for(int i=0;i<step.size();i++)
        printf("%d ",step[i]);
    printf("\n");
    return 0;
}
