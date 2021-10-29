#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int data[]={71,85,10,12,45};
    sort(data,data+5);
    for(int i=0;i<5;i++)
        cout<<data[i]<<" ";
                int key=12;
        if(binary_search(data,data+5,key))
            cout<<"found";
        else
            cout<<"not found";
        rotate(data,data+3,data+5);
     for(int i=0;i<5;i++)
        cout<<data[i]<<" ";
    return 0;
}
