#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; scanf("%d",&t);

    while(t--){
        int n;
        string str;
        cin >> n >> str; // input n & str


        string encode="abcdefghijklmnop";
        int position=0;

        for(int i=0;i<n;i+=4){
            if(str[i]=='1')
                position+=8;
            if(str[i+1]=='1')
                position+=4;
            if(str[i+2]=='1')
                position+=2;
            if(str[i+3]=='1')
                position+=1;

            cout<<encode[position];
            position=0;
        }
        printf("\n");
    }
    return 0;
}
