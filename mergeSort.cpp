#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int parition(int arr[], int low, int high){
    int pivot, i, j;
    pivot = arr[low];
    i = low+1;
    j = high;
    while(i<=j){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j)
            swap(arr[i], arr[j]);
        swap(arr[j], arr[low]);
        return j;
    }
}

void quickSort(int arr[], int low, int high) {
    int p;
    if(low < high) {
        p = parition(arr, low, high);
        quickSort(arr, low, p);
        quickSort(arr, p+1, high);
    }
}

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {17, 15, 10, 11, 66, 44};
    int size = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, size-1);
    cout<<"Sorted Array:"<<endl;
    printArray(arr, size);
    
    return 0;
}
