#include<iostream>
#include<stack>

using std::cout; 
using std::cin; 
using std::endl;

struct Node {
    int info;
    struct Node* next;
};

struct Node* head = NULL;

void insert(int item){
    struct Node* temp = new struct Node;
    temp->info = item;
    temp->next = head;
    head = temp;
}

void ViewAll(){
    struct Node* temp = head;
    while(temp!= NULL){
        cout<<temp->info;
        temp = temp->next;
    }
    cout<<endl;
}

void Reverse(){
    if(head == NULL) return; 
    std::stack<struct Node*> S;
    struct Node* temp = head;
    while(temp != NULL){
        S.push(temp);
        temp = temp->next;
    }
    temp = S.top(); head = temp;
    S.pop();
    while(!S.empty()){
        temp->next = S.top();
        S.pop();
        temp = temp->next;
    }
    temp->next = NULL;
}

int main(){
    for(int i = 1; i<= 10; i++)
        insert(i);
    ViewAll();
    Reverse();
    ViewAll();
    return 0;
}