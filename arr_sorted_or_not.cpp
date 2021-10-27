#include <iostream>
using namespace std;

bool checkSorted(int *arr,int n){
    if(n==1){
        return true;
    }
    bool rest = checkSorted(arr+1,n-1);
    return (arr[0]<arr[1] && rest);
    // if at someplace in recursion we get false then it should travel up the recursion tree.
}

int main(){
    int arr[] = {1,2,3,-4};
    int n = sizeof(arr)/sizeof(int);
    cout<<checkSorted(arr,n);
    return 0;
}