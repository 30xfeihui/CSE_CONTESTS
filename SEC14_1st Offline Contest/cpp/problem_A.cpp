#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t; cin>>t;
    long long tt=1; // number of test case

    while(t--){
        string a;
        long long b;
        cin >> a >> b;

        long long div=0;
        for(auto &i: a){ // i is a[0....n]
            if(i!='-')
                div = ((div*10)+(i-'0'))%b;
        }
        cout << "Case "<<tt++<<": ";
        if(!div) cout << "divisible"<<endl; // if(!div) means if(div==0)
        else cout << "not divisible"<<endl;
    }
    return 0;
}
