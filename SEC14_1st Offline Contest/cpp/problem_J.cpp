#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;
    
    int n,k; cin>>n>>k;

    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    sort(arr.rbegin(), arr.rend()); // reverse sort
    
    cout << arr[k-1] << endl;

    return 0;
}