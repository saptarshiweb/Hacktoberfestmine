#include <iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void Reverse(int arr[],int l,int r){
    while(l<r){
        int t = arr[l];
        arr[l] = arr[r];
        arr[r] = t;
        l++;
        r--;
    }
}

void Rotate(int arr[],int d,int n){
    Reverse(arr,0,d-1);
    Reverse(arr,d,n-1);
    Reverse(arr,0,n-1);
}

int main(){
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int d = 4; 
  
    // Function calling 
    Rotate(arr, d, n); 
    print(arr, n); 
    return 0;
}