#include<bits/stdc++.h>
using namespace std;

#define MAX 10

int stack1 [MAX];
int top = -1;

void push(int value) {
   if(top==MAX-1){
     cout<<"Error: Stack overflow!\n";
   }
   else {
    top++;
    stack1[top]=value;
   }

}
int pop() {
    if(top==-1){
        cout<<"Error: stack underflow!\n";
        return -1;
    }
    else {
    top--;
     return stack1[top+1];
    }
}
void print() {
   if(top==-1) {
    cout<<"Stack is empty\n";
    return ;
   }
   else {
    for(int i=0; i<=top; i++)
    {
        cout<<stack1[i];
    }
   }
   cout<<endl;
}
int main()
{
    int n , r , del;
    cin>>n;
    if(n==0)
    {
        cout<<"binary:0";
        return 0;
    }
    while(n>0)
    {
        r = n%2;
        push(r);
        n /= 2;
    }
    while(1)
    {
        del = pop();
        cout<<del;
        if(top==-1)
        {
            break ;
        }
    }
    return 0;
}
