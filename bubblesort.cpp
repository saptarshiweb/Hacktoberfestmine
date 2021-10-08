#include<iostream.h>
using namespace std;
int bubble(int[],int);

int main()
{
    int i,a[100],n;
    cout<<"ENTER NUMBER OF ITEMS: ";
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        cout<<"ENTER ITEM "<<i+1<<":";
        cin>>a[i];
    }

    bubble(a,n);

    cout<<"SORTED DATA"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}

int bubble(int A[],int N)
{
    int temp,i,j;

    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}