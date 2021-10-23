#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll a[n],b[n-1],c[n-2];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(ll i=0;i<n-1;i++)
	{
		cin>>b[i];
	}
	for(ll i=0;i<n-2;i++)
	{
		cin>>c[i];
	}
	sort(a,a+n);
	sort(b,b+n-1);
	sort(c,c+n-2);
	int t1=0,t2=0;
	for(ll i=0;i<n-1;i++)
	{
		if(a[i]!=b[i])
		{
			cout<<a[i]<<endl;
			t1=1;
			break;
		}
	}
	if(t1 == 0)
	cout<<a[n-1]<<endl;
	for(ll i=0;i<n-2;i++)
	{
		if(b[i]!=c[i])
		{
			cout<<b[i];
			t2=1;
			break;
		}
	}
	if(t2 == 0)
	{
		cout<<b[n-2];
	}
	return 0;
}
