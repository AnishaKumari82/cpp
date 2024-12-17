#include <iostream>
using namespace std;



void printarr(int arr[],int n){
    for(int i=0; i<n;i++){
       cout<< arr[i]<<" "; 
    }
    cout<< endl;
}

void insertionsort(int arr[],int n){
    for(int i=1;i<n; i++){
        int curr=arr[i];
        int prev = i-1;
         while(prev >= 0 && arr[prev]>curr){
           arr[prev+1]=arr[prev];
           prev--;
         }
         arr[prev+1]= curr; //placing the curr el in its correct posi 
    }
}

int main() {
    int n=5;
    int arr[]={4,1,5,2,3};

    insertionsort(arr,n);
    printarr(arr,n);
    return 0;
}