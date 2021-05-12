#include<iostream>

using std::cout;
using std::cin;
using std::endl; 


class Stack{
    private:
        int top;
        int info[100];
    public:
        Stack(){
            this->top = -1;
        }
        void push(int item){
            if(this->top >= 100){
                cout<<"Stack Overflows";
            }
            else{
                this->top = this->top + 1;
                this->info[this->top] = item;
            }
        }
        int pop(){
            int element;
            element = this->info[this->top];
            if(this->top < 0){
                cout<<"Stack Underflows"<<endl;
                return 0;
            }
            else{
                this->top -= 1;
                return element;
            }
        }
};


int main(){
    Stack a1;
    for(int i = 1; i <= 10; i++){
        a1.push(i);
    }
    for(int i = 0; i < 10; i++){
        cout<<a1.pop()<<endl;
    }
    return 0;
}