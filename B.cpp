//#include<bits\stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int num=1; num<=T; num++){
        string a;
        int b;
        cin>>a>>b;
        long long rem=0;
        int i = 0;
        if(a[0]=='-'){
            i = 1;
        }
        for (i=1; i < a.size(); ++i) {
            rem = (rem * 10 + (a[i] - '0')) % abs(b);
        }
        cout << "Case " << num << ": ";
        if (rem == 0)
            cout << "divisible" << endl;
        else
            cout << "not divisible" << endl;

    }
    return 0;
}
