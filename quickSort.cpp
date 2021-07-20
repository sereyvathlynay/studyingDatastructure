#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void quickSort(int a[], int L, int R){
    int i, j, pivot, temp;
    i = L;
    j = R;
    pivot = a[(L + R) / 2];
    do{
        while(a[i] < pivot) i++;
        while(a[j] > pivot) j--;
        if(i <= j){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }while(i <= j);
    if(L < j) quickSort(a, L, j);
    if(i < R) quickSort(a, i, R);
}

void printAll(int list[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << list[i] << ' ';
    }
    cout << endl;
}

int main(){
    int list[12]{30, 40, 20, 45, 90, 23, 72, 16, 80, 18, 50, 60};
    int b[10]{10, 9, 8, 7, 6, 1, 4, 3, 2, 5};
    quickSort(list, 0, 12);
    printAll(list, 12);
    quickSort(b, 0, 10);
    printAll(b, 10);
    return 0;
}