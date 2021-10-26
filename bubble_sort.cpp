#include<iostream>  
void bubble_sort(int *arr,int size){
for(int i=0;i<size;++i){
    for(int j=0;j<size-i-1;j++){
        if(arr[j+1]<arr[j]){
        int temp=arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=temp;
    }
    }
}
}
using namespace std ;
int main(){
int arr[]={23,2,234,12,7,35,75,53};
int size=sizeof(arr)/sizeof(arr[0]);
bubble_sort(arr,size);
cout<<"Array after sorting is \n";
for (auto v : arr)
cout<<v<<" ";

return 0;
}