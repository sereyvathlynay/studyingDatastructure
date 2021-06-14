#include<iostream>

using std::cout;
using std::cin;
using std::endl;

/*
#define MaxQue 100

struct Queue{
    int front;
    int rear;
    int Node[MaxQue];
};

struct Queue q;

void enque(int item){
    if(q.rear > MaxQue){
        cout<<"Queue overflows"<<endl;
        return;
    }
    q.rear+=1;
    q.Node[q.rear]=item;
}

int deque(){
    int element;
    element = q.Node[q.front];
    q.front+=1;
    //cout<<element<<endl;
    return element;
}

int main(){
    q.front=0;
    q.rear=-1;
    for(int i=0; i<10; i++)
        enque(i);
    for(int i=0; i<5; i++){
        //int b = deque();
        cout<<deque()<<endl;
    }
    return 0;
}
*/