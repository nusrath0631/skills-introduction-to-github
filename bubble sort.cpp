#include<bits/stdc++.h>
using namespace std;
int main()
{   //int temp;
    int n = 5;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(arr[j]>arr[j+1])

            int temp = arr[j];
            arr[j] =  arr[j+1];
            arr[j+1] = int temp;
        }
    }
    for(int i=0; i<n; i++){
     cout<<arr[i]<<" ";
    }
}
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(arr[j]>arr[j+1])
                int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}*/
