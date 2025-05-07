#include<bits/stdc++.h>
using namespace std;
    int main()
    {
        int T;
        cin>>T;
        for(int i=1; i<=T; i++)
        {
            int n;
            cin>>n;
            int add=0;
            while(n)
            {
              add+=(n&1);
              n>>=1;
            }
            if(add%2 == 0)
            {
               cout<<"case"<<i<<":"<<"Even"<<endl;
            }
            else{
                cout<<"case"<<i<<":"<<"Odd"<<endl;
            }

        }
        return 0;
    }
