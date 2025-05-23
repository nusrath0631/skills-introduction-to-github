#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size-1;

    while(left<=right)
    {
        int mid = (right+left)/2;
        if(arr[mid]==target)
            return mid;
        if(arr[mid]<target)
            left=mid+1;
        else
            left=mid-1;

    }
    return -1;

}
int main()
{
 int arr[]={2, 4, 6, 8, 10, 12, 14} ;
 int size = sizeof(arr)/sizeof(arr[0]);
  int target = 10;
  int result = binarySearch(arr,size,target);
    if(result != -1)
    cout<<"elements found at index"<<result<<endl;
    else
    cout<<"elements not found"<<endl;

 return 0;
}
