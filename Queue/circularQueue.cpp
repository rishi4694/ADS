#include <bits/stdc++.h>
using namespace std;
#define m 6
class Queue{
    int item[m];
    int rear;
    int front;
    public:
    Queue(){
        rear=m-1;
        front=m-1;
    }
    bool IsEmpty(){
        if(rear==front)
        return true;
        return false;
    }
    void EnQueue(int x){
        if((rear+1)%m==front){
            cout<<"Queue overflow";
            exit(1);
        }
        else{
            rear=(rear+1)%m;
            item[rear]=x;
        }
    }
   int  DeQueue(){
       if(rear==front){
           cout<<"Queue underflow";
           exit(1);
       }
        front=(front+1)%m;
        int x=item[front];
        return x;
    }
};
int main() {
    Queue Q;
	Q.EnQueue(1);
	Q.EnQueue(2);
	Q.EnQueue(3);
	Q.EnQueue(4);
	Q.EnQueue(5);
	cout<<Q.DeQueue();
}
