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

/*void reverse(){
    struct Node *temp = head;
    struct Node *p;
    while(temp != NULL){
        p = temp->next;
        head = temp;
        temp->next = temp->prev;
        temp->prev = p;
        temp = temp->prev;
    }
}*/

void reverse(){
    struct Node* p;
    p = head->next;
    head->next = head->prev;
    head->prev = p;
    if(p == NULL){
        return;
    }
    head = p;
    reverse();
}

void Print(){
    struct Node* p = head;
    while(p != NULL){
        cout<<p->info<<' ';
        p = p->next;
    }
    cout<<endl;
}

void reversePrint(){
    struct Node* p = head;
    while(p->next != NULL){
        p = p->next;
    }
    while(p != NULL){
        cout<<p->info<<' ';
        p = p->prev;
    }
    cout<<endl;
}

int main(){
    for(int i = 1; i<=10; i++)
        insertFront(i);
    Print();
    reverse();
    //reversePrint();
    Print();
    return 0;
}