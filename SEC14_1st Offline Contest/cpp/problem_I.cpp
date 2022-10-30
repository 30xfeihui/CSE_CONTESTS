#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        int first_sum=0, second_sum=0;

        second_sum += n%10; n/=10;
        second_sum += n%10; n/=10;
        second_sum += n%10; n/=10;

        first_sum += n%10; n/=10;
        first_sum += n%10; n/=10;
        first_sum += n%10; n/=10;

        if(first_sum==second_sum) cout << "YES" << endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}