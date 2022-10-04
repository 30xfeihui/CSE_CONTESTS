#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t; scanf("%d",&t);

    while(t--){

        string board;

        int previous_count=0;
        // we will count # in the string
        // if it has 1 # and prevoiusly had 
        // 2 # then that is the ans

        int  ansi=0,ansj=0, con=0; // here con variable is used to break if we have found the answer

        for(int i=0;i<8;i++){
            cin >> board; // input string line by line and process it 

            int count = 0, dummy_i=0,dummy_j=0;


            for(int j=0;j<8;j++){
                if(board[j]=='#'){
                    count++;
                    dummy_i = i;
                    dummy_j = j;
                }
            }
            // if this condtion is true then we have found our ans
            // but as we are in a loop which is taking input , so
            // we can't break the loop.. that's why con==0 is checked.
            if(previous_count==2 && count==1 && con==0){
                ansi = dummy_i;
                ansj = dummy_j;

                con=1;
            }
            previous_count = count;
        }
        printf("%d %d\n",ansi+1,ansj+1);
    }
    
    return 0;
}
