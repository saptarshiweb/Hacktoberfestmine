#include <iostream>
using namespace std;
int lastDigit(int n)
{
    return (n % 10);
}
int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    if(n<9)
	    cout<<0<<endl;
	    if(n==9)
	    cout<<1<<endl;
	    if(n>9)
	    {
	        int k=n/10;
	        if(lastDigit(n)==9)
	        k=k+1;
	        cout<<k<<endl;
	    }
	}
	return 0;
}
