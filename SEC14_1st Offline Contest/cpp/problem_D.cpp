#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t; cin>>t;

    while(t--){
        int n;
        string s, sorted_s;
        cin >> n >> s;

        sorted_s = s;
        sort(sorted_s.begin(),sorted_s.end());
        
        int ans=0;

        for(int i=0;i<n;i++)
            if(s[i]!=sorted_s[i]) ans++;

        cout<<ans<<endl;
    }
    return 0;
}
