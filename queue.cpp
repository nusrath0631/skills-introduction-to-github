#include <bits/stdc++.h>
using namespace std;
#define MAX 10

int queue1[MAX], front1 = -1, rear = -1;

void enqueue(int value){
    if(rear == MAX - 1){
        cout << "ERROR: Queue Overflow!" << endl;
    }
    else{
        if (front1 == -1) front1 = 0;
        rear++;
        queue1[rear] = value;
    }
}

int dequeue(){
    if(front1 == -1 || front1 > rear){
        cout << "ERROR: Queue Underflow!" << endl;
        return -1;
    }
    int value = queue1[front1++];
    if(front1 > rear) front1 = rear = -1;
    return value;
}

void print(){
    if(front1 == -1){
        cout << "Queue is empty" << endl;
    }
    else{
        cout << "Queue elements: ";
        for (int i = front1; i <= rear; i++) {
            cout << queue1[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    int choice, value;

    while(true){
        cout << "\n1. Enqueue\n2. Dequeue\n3. Print\n4. Exit\n";
        cout << "Enter option: ";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                enqueue(value);
                break;
            case 2:
                value = dequeue();
                if(value != -1){
                    cout << "Dequeued value: " << value << endl;
                }
                break;
            case 3:
                print();
                break;
            case 4:
                exit(0);
            default:
                cout << "invalid choice" << endl;
        }
    }

    return 0;
}
