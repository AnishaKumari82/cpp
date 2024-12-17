#include <iostream>
using namespace std;

void bubblesort(int arr[],int n){  //o(n^2)
    for(int i=0;i<n-1;i++){

        bool isswap =false;

        for(int j=0; j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswap =true;

            }
            
        }

        if(!isswap) { //arr is already sorted
           return;
        }
    }
}

void printarr(int arr[],int n){
    for(int i=0; i<n;i++){
       cout<< arr[i]<<" "; 
    }
    cout<< endl;
}

int main() {
    int n=5;
    int arr[]={4,1,5,2,3};

    bubblesort(arr,n);
    printarr(arr,n);
    return 0;
}