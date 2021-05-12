#include<iostream>

using std::cout;
using std::cin;
using std::endl;

struct Node{
    int info;
    struct Node *next;
};

struct Node *getnode(){
    return new struct Node;
}

void initialize(struct Node **head)
{
    *head = NULL;
}

void insert_first(struct Node **head, int item)
{
    // This function inserts a node to the front of the list
    struct Node *p = getnode();
    p->info = item;
    p->next = *head;
    *head = p;
}

void insert_last(struct Node **head, int item){
    // This function insert a node to the end of the list
    struct Node *temp = getnode();
    struct Node *p = *head;
    temp->info = item;
    if(p == NULL){
        temp->next = NULL;
        *head = temp;
    }
    else{
        while(p->next != NULL){
            p = p->next;
        }
        temp->next = p->next;
        p->next = temp; 
    }
}

void insert(struct Node **head, int item, int pos){
    // This function inserts a node to the nth position
    struct Node *temp = getnode();
    struct Node *p = *head;
    for(int i = 0; i < pos - 2; i++){
        p = p->next;
    } 
    temp->info = item;
    temp->next = p->next;
    p->next = temp;
}

void viewAll(struct Node **head)
{
    struct Node *p;
    p = *head;
    while (p != NULL)
    {
        cout << p->info << ' ';
        p = p->next;
    }
}

int main()
{
    struct Node *head;
    initialize(&head);

    for (int i = 1; i <= 10; i++){
        insert_first(&head, i);
        insert_last(&head, i);
        viewAll(&head);
        cout<<endl;
    }
    cout<<endl;
    insert(&head, 100, 3);
    cout<<"Insert 100 to position 3"<<endl;
    viewAll(&head);
    return 0;
}

//Declare Node's variable in main function but insert function
//returns a pointer
/*
struct Node *insert_first(struct Node *head, int item){
    struct Node *temp = getnode();
    temp->info = item;
    temp->next = head;
    head = temp;
    return head;
}

void viewAll(struct Node *head)
{
    while (head != NULL)
    {
        cout << head->info << ' ';
        head = head->next;
    }
}

void insert_last(struct Node *head, int item)
{
    struct Node *temp = getnode();
    struct Node *q = head;
    while (q->next != NULL)
    {
        q = q->next;
    }
    temp->info = item;
    temp->next = NULL;
    q->next = temp;
}

int main(){
    struct Node *head = NULL;
    for (int i = 0; i < 10; i++)
    {
        head = insert_first(head, i);
        insert_last(head, i);
        viewAll(head);
        cout << endl;
    }

    return 0;
}
*/

// Declare Node's variable globally
/*
struct Node *head;

void insert_first(int item){
    struct Node *temp = getnode();
    temp->info = item;
    temp->next = head;
    head = temp;
}

void insert_last(int item){
    struct Node *temp = getnode();
    struct Node *q = head;
    while(q->next != NULL){
        q = q->next;
    }
    temp->info = item;
    temp->next = NULL;
    q->next = temp; 
}

void viewAll(){
    struct Node *temp;
    temp = head;
    while(temp != NULL){
        cout<<temp->info<<' ';
        temp = temp->next;
    }
}

int main(){
    head = NULL;
    for(int i = 0; i < 10; i++){
        insert_first(i);
        insert_last(i);
        viewAll();
        cout<<endl;
    }

    return 0;
}
*/


// declare Node's variable in the main function
/*
void initialize(struct Node **head){
    *head = NULL;
}

void insert(struct Node **head, struct Node **tail, int item){
    struct Node *p = getnode();
    p->info = item;
    if(*head == NULL ){
        p->next = *head;
        *head = p;
        *tail = p; 
    }
    else{
        p->next = (*tail)->next;
        (*tail)->next = p;
        *tail = p;
    }
}

void viewAll(struct Node **head){
    struct Node *p;
    p = *head;
    while(p != NULL){
        cout<<p->info<<endl;
        p = p->next;
    }
}

int main()
{
    struct Node *head; 
    struct Node *tail;
    initialize(&head);

    for(int i = 1; i<=10; i++)
        insert(&head, &tail, i);
    viewAll(&head);

    return 0;
}
*/