#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[100];
    cout<<"Enter  number of element: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int max = arr[0], min=[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    cout<<"Maximum:"<<max<<"\nminimum:"<<min<<endl;
    return 0;
}
