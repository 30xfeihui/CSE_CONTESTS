#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; scanf("%d",&t);
    while(t--){
        string str;
        cin >> str;

        cout<<str[0];

        for(int i=1;i<str.length();i+=2)
            cout<<str[i];
        printf("\n");
    }
    
    return 0;
}
