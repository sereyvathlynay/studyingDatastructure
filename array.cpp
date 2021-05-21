#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#define MaxStack 100

struct Stack
{
    int info[MaxStack];
    int top;
};

void initialize(struct Stack *s);
void push(struct Stack *s, int item);
int pop(struct Stack *s);

struct dyStack
{
    int info;
    struct dyStack *next;
};

struct dyStack *initialize();
struct dyStack *getnode();
struct dyStack *push(struct dyStack *s, int item);
struct dyStack *pop(struct dyStack *s);

int main()
{
    struct Stack S1;
    struct dyStack *S2 = initialize();
    initialize(&S1);

    for (int i = 1; i <= 10; i++)
        push(&S1, i);
    for (int i = 0; i < 10; i++)
        cout << pop(&S1) << endl;
    
    for (int i = 1; i <= 10; i++)
        S2 = push(S2, i);
    for (int i = 0; i < 10; i++)
    {
        cout << S2->info << endl;
        S2 = pop(S2);
    }
    
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

struct dyStack *initialize()
{
    return NULL;
}

struct dyStack *getnode()
{
    return new struct dyStack;
}

struct dyStack *push(struct dyStack *s, int item){
    struct dyStack* temp = getnode();
    temp->info = item;
    temp->next = NULL;
    if(s != NULL)
        temp->next = s;
    return temp;
}

struct dyStack *pop(struct dyStack *s)
{
    struct dyStack *temp = s;
    if (temp == NULL)
    {
        cout << "Stack underflow" << endl;
        return NULL;
    }
    s = temp->next;
    free(temp);
    return s;
}