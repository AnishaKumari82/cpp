#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool ispossible(vector<int> &arr, int N , int C, int minalloweddist){
    //sort the arr
    int cows=1, laststallposs = arr[0];
    for(int i=1; i<N;i++){
        if (arr[i]-laststallposs>= minalloweddist) {
             cows++;
             laststallposs = arr[i];
        }
        if(cows==C){
            return true;
        }
    }

    return false;
}
int getdistance(vector<int> &arr, int N , int C){
    sort(arr.begin(),arr.end());
    //st=1, end = maxval-minval;

    int st=1, end = arr[N-1]- arr[0] ,ans=-1;

    while(st<=end){
        int mid =st+(end-st)/2;
        if(ispossible(arr,N, C, mid)){ //right
            ans=mid;
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    return ans;
}

int main(){
    int N =5, C=3;
    vector<int> arr ={1,2,8,4,9};
    
    cout<< getdistance(arr,N,C)<<endl;
    return 0;
}