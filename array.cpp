#include<iostream>

using std::cout;
using std::cin;
using std::endl; 

#define MaxStack 100

struct Stack{
    int info[MaxStack];
    int top;
};

struct dyStack{
    int info;
    struct dyStack* top;
}*S2;

void initialize(struct dySack);
void initialize(struct Stack* s);
void push(struct Stack* s, int item);
int pop(struct Stack* s);

int main(){
    struct Stack S1;
    initialize(&S1);

    for(int i = 1; i<= 10; i++)
        push(&S1, i);
    for(int i = 0; i< 10; i++)
        cout<<pop(&S1)<<endl;
    return 0;
}

void initialize(struct Stack *s)
{
    s->top = -1;
}

void push(struct Stack *s, int item)
{
    if (s->top >= MaxStack)
    {
        cout << ("Stack overflow") << endl;
        return;
    }
    s->top += 1;
    s->info[s->top] = item;
}

int pop(struct Stack *s)
{
    int element = s->info[s->top];
    if (s->top < 0)
    {
        cout << "Stack underflow" << endl;
        return -1;
    }
    s->top -= 1;
    return element;
}

struct dyStack* initialize(){
    return NULL;
}

struct dyStack* getnode(){
    return new struct dyStack;
}

struct dyStack* push(struct Dystack *s){
    
}