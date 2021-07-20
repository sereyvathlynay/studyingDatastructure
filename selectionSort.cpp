#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void selectionSort(int a[], int n){
    int min, temp;
    for(int i = 0; i < n; i++){
        min = i;
        for(int j = i + 1; j < n; j++){
            if(a[min] > a[j]){
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

void printAll(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
}

int main()
{
    int a[12]{30, 40, 20, 45, 90, 23, 72, 16, 80, 18, 50, 60};
    selectionSort(a, 12);
    printAll(a, 12);
    return 0;
}