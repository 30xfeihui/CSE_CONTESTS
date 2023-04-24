#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define endl "\n"
#define LSONE(x) ((x) & -(x))

/**
 * 
 * 
 * 9xZER0
 * 
 **/



int32_t main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;

    int n;
    while(cin>>n){

        vector<int> arr(n);

        for(auto &i: arr) cin>>i;
        
        vector<bool> check(n);
        for(int i=0;i<n;i++){

            int diff = abs(arr[i]-arr[i-1]);

            if(diff<n) check[diff] = true;

        }

        int con = 1;
        for(int i=1;i<n;i++){
            if(!check[i]) con = 0;
        }

        if(con) cout << "Jolly" << endl;
        else cout << "Not jolly" << endl;
    }

    return 0;
}