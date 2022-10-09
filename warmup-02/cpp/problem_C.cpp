#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str; // declare string
    cin >> str; // input string

    for(int i=str.length()-1;i>=0;i--){
        if(str[i]=='9') printf("6");
        else if(str[i]=='6') printf("9");
        
        else cout<<str[i];
        // for output string , use cout
        // else you will get segmentation fault
    }
    printf("\n");

    return 0;
}

