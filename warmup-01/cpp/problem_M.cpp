#include <bits/stdc++.h>
using namespace std;

int main()
{
    string string1,string2; // declare string
 
    cin >> string1 >> string2; // input string


    // we will swap strings if string1 is smaller than string2
    // as we will consider string1 is always greater than string2
    if(string1.length()<string2.length()){
        string dump = string2;
        string2 = string1;
        string1 = dump;
    }

    int length_diff = string1.length()-string2.length();
    int c=0,ans = 0;

    for(int i=string2.length()-1;i>=0;i--){ // traverse string2 from reverse
        if(string2[i]!=string1[i+length_diff]) break; // break elements aren't equal
        else c++;
    }

    ans = (string1.length()-c)+(string2.length()-c);
    cout << ans ;
    
    return 0;
}
