#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n , num = 1;
    cin>>n;
    while(n!=0)
    {
      vector<int>stack(n);
      int totalBricks = 0;

      for(int i=0; i<n; i++)
      {
        cin>>stack[i];
        totalBricks += stack[i];
      }
      int average = totalBricks/2;
      int m = 0;

       for(int i=0; i<n; i++)
       {
         if(stack[i]>average){

            m += stack[i]-average;
         }
       }
       cout << "Set #" << num << endl;
       cout << "The minimum number of moves is " << m << "." << endl;
       cout << endl;

        num++;

    }
    return 0;
}
