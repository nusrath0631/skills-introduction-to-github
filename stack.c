#include<stdio.h>
#include<stdlib.h>

#define MAX 10

int stack1 [MAX];
int top = -1;

void push(int value) {
   if(top==MAX-1){
     printf("Error: Stack overflow!\n");
   }
   else {
    top++;
    stack1[top]=value;
   }

}
int pop() {
    if(top==-1){
        printf("Error: stack underflow!\n");
        return -1;
    }
    else {
    top--;
     return stack1[top+1];
    }
}
void print() {
   if(top==-1) {
    printf("Stack is empty\n");
    return ;
   }
   else {
    for(int i=0; i<=top; i++)
    {
        printf("%d\n",stack1[i]);
    }
   }
   printf("\n");
}
int main()
{
   int choice , value;

   while(1){
    printf("1. push\n2.pop\n3.print\n4.exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
  case 1:
      printf("Enter value to push: ");
    scanf("%d", &value);
    push(value);
    break ;
  case 2:
    value = pop();
    if(value!=-1)
    {
        printf("Popped value: %d\n",value);
    }
    break ;
  case 3:
    print();
  case 4:
    exit(0);

  default:
      printf("Invalid choice!\n");

    }
   }
   return 0;

}







