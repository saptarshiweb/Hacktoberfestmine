#include <iostream>
using namespace std;

int firstOcc(int *arr,int n,int i,int key){
    if(i==n)return -1;

    if(arr[i]==key)return i;

    return firstOcc(arr,n,i+1,2);
}

int lastOcc(int *arr,int n,int i,int key){
    if(i==n)return -1;
    int rest = lastOcc(arr,n,i+1,2);
    if(rest!=-1)return rest;
    if(arr[i]==key)return i;
    return -1;
    // rest can have two possible values : either -1 ior i 
    // so we return -1 when we reach the end of the array or if we did'nt find the element otherwise if we find the element we return its index

}


int main(){
    int arr[] = {5,3,2,4,-1,7,2};
    int n = sizeof(arr)/sizeof(int);
    cout<<"Element found at "<<firstOcc(arr,n,0,2)+1<<'\n';
    cout<<"Element found at "<<lastOcc(arr,n,0,2)+1<<'\n';
    return 0;
}