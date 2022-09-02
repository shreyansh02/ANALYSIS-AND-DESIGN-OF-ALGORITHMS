#include<bits/stdc++.h>
using namespace std;

void selectionSort(int a[], int n) {
    for(int i=0; i<n-1; i++) {
        int min=i;
        for(int j=i+1; j<n; j++) {
            if(a[j] < a[min])
                min = j;
        }
        if(min != i) {
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}

int main() {
    int n;
    cout<<"Enter the size array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the value in array:"<<endl;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    selectionSort(arr, n);
    
    cout<<"Array after sorting:"<<endl;
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
