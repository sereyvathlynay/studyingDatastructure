#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void bubbleSort(int list[], int n){
    int temp;
    for(int j = 1; j < n; j++){
        for(int i = 0; i < n-j; i++){
            if(list[i] > list[i+1]){
                temp = list[i];
                list[i] = list[i+1];
                list[i+1] = temp;
            }
        }
    }
}

void printAll(int list[], int n){
    for(int i=0; i<n; i++){
        cout<<list[i]<<' ';
    }
    cout<<endl;
}

int main(){
    int a[15]{54, 13, 45, 32, 47, 76, 70, 23, 33, 60, 27, 15, 20, 40, 50};
    bubbleSort(a, 15);
    printAll(a, 15);
    return 0;
}