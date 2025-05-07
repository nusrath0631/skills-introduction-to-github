#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int left , int right ,int target)
{
    if(left>right)
    return -1 ;
}
  int mid = left + (right - left) / 2;
  if(arr[mid]==target){
    return mid;
}
  else if(arr[mid]>target){
    return binarysearch(arr, left , n-1 , target);
}
  else {
    return binarysearch(arr, n+1 , right , target);
}

int main()
{
  int arr[]={1,2,3,4,5,6,7};
  int n = sizeof(arr)/sizeof(arr[0])
  int target = 5;
  int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
