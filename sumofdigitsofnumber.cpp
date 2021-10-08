#include<iostream.h>
using namespace std;

int main()
{
    int i,x,s=0,q,y;
    cout<<"ENTER THE NUMBER: ";
    cin>>x;
    
    while(x!=0)
    {
        y=x%10;
        x=x/10;
        s=s+y;
    }
    cout<<"SUM: "<<s;
}