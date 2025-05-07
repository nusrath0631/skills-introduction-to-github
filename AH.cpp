#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x;
        cin>>x;

        int found = 0;

        for(long long a=1; a*a*a<x; a++){

            long long a3 = a * a * a;

            long long b3 = x-a3;

            long long b  = round(cbrt(b3));

            if (b > 0 && b * b * b == b3) {
                cout << "YES" << endl;
                found = 1;
                break;
        }

    }
    if(found==0){
        cout << "NO" << endl;
    }
}
  return 0;
}
