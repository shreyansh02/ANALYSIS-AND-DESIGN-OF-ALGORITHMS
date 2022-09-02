#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
    int n1 = mid-low+1;
    int n2 = high-mid;
    int l[n1], m[n2];
    for(int i=0; i<n1; i++)
        l[i] = arr[low+i];
    for(int j=0; j<n2; j++)
        m[j] = arr[mid+1+j];
    int i=0; int j=0; int k=low;
    while(i<n1 && j<n2) {
        if(l[i] <= m[j])
            arr[k++] = l[i++];
        else
            arr[k++] = m[j++];
    }
    while(i < n1){
        arr[k++] = l[i++];
    }
    while(j < n2){
        arr[k++] = m[j++];
    }
}

void mergeSort(int arr[], int low, int high) {
    if(low < high){
        int mid = (low+high)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
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
    mergeSort(arr, 0, size-1);
    cout<<"Sorted Array:"<<endl;
    printArray(arr, size);
    
    return 0;
}
