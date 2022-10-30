#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;
    
    // we used map to store days
    map<string,int> mp;

    mp["Monday"] = 5;
    mp["Tuesday"] = 4;
    mp["Wednesday"] = 3;
    mp["Thursday"] = 2;
    mp["Friday"] = 1;


    string s; cin>>s;
    cout<<mp[s]<<endl;

    return 0;
}

