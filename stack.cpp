#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
int main()
{
    char a[20]="donald";
    stack<char>p;
    int i;
    for(i=0;i<strlen(a);i++)
        p.push(a[i]);
    cout<<"revesed string ";
    while(!p.empty())
    {
        cout<<p.top();
        p.pop();
    }
    return 0;
}
