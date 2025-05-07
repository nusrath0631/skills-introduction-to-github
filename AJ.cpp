#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p[10000];
    for(int i=0; i<n; i++){
        cin>>p[i];

    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(p[j] > p[j+1]){
                int temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int m;
        cin>>m;

        int count = 0;
        for(int j=0; j<n; j++){
            if(p[j]<= m){
                count++;
            }
            else{
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
