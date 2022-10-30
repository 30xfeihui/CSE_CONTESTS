#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t; cin>>t;
    long long tt=1; // number of test case

    while(t--){

        long long a,b;
        cin>>a>>b;

        a = a*10;
        b = b*5;

        if(a==b) cout<<"ANY"<<endl;
        else if(a>b) cout <<"FIRST"<<endl;
        else cout<<"SECOND"<<endl;
    }
    return 0;
}
