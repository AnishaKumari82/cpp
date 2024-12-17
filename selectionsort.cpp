#include <iostream>
using namespace std;



void printarr(int arr[],int n){
    for(int i=0; i<n;i++){
       cout<< arr[i]<<" "; 
    }
    cout<< endl;
}

void selectionsort(int arr[],int n){
    for(int i=0;i<n-1; i++){
        int smallind=i;
        for(int j=i+1;j< n ;j++){
            if(arr[j]<arr[smallind]){
                smallind=j;
            }
        }
        swap(arr[i],arr[smallind]);
    }
}

int main() {
    int n=5;
    int arr[]={4,1,5,2,3};

    selectionsort(arr,n);
    printarr(arr,n);
    return 0;
}