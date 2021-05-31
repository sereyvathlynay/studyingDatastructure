#include<iostream>
#include<stack>
#include<string.h>

using std::cout;
using std::cin;
using std::endl;


void Reverse(char *C, int n){
    std::stack<char> S;
    for(int i = 0; i<n; i++)
        S.push(C[i]);
    for(int i = 0; i<n; i++){
        C[i] = S.top();
        S.pop();
    }
}

int main(){
    char C[51];
    std::stack<struct Node*> S;
    cout<<"Enter a string: "; cin>>C;
    Reverse(C, strlen(C));
    cout<<C;
}