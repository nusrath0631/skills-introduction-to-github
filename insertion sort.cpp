#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , pos , value ;
    char c;
    cin>>n;
    int arr[n];
    memset(arr, -1, sizeof(arr));
    for(int i=0; i<n; i++)
    {
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"For exit: x\nFor insertion: i\nFor deletion: d\nFor printing: p"<<endl;
    while(1){
        cin >> c;
        if(c == 'x')
            break ;

     else if(c == 'i'){
            cin >> pos >> value;
            if(arr[pos] == -1){
                arr[pos] = value;
            }
            else {
                    for(int i=n-1; i>pos; i--){
                    arr[i]=arr[i-1];
            }
            arr[pos]=value;
            }
     }
     else if(c == 'd'){
        cin>>pos;
        for(int i=pos; i<n-1; i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=-1;

     }
     else if(c == 'p'){
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
     }


}
   return 0;
}
