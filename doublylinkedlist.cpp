#include<iostream>

using std::cin;
using std::cout;
using std::endl;

struct Node{
    int info;
    struct Node *next;
    struct Node *prev;
};

struct Node* head;

struct Node* getnode(){
    struct Node* temp = new struct Node;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}

void insertFront(int item){
    struct Node* temp = getnode();
    temp->info = item;
    if(head == NULL){
        head = temp;
        return;
    }
    head->prev = temp;
    temp->next = head;
    head = temp;
}

void Print(){
    struct Node* p = head;
    while(p != NULL){
        cout<<p->info<<' ';
        p = p->next;
    }
    cout<<endl;
}

int main(){
    for(int i = 1; i<=10; i++)
        insertFront(i);
    Print();
    return 0;
}