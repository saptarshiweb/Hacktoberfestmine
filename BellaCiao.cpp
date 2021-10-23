#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll D,d,P,Q,ans=0;
		cin>>D>>d>>P>>Q;
		if(D%d!=0)
		{
			ll last = D/d;
			ll lastAmt = (last*Q)+P;
			ll restDays = (D-1)/2;
			ll restAmt = (restDays*(2*P+(restDays-1)*Q))/2;
			ans=restAmt*d+lastAmt;
		}
		else
		{
			ll days = D/d;
			ll amt = (days*(2*P+(days-1)*Q))/2;
			ans=amt*d;
		}
		cout<<ans<<endl;
	}
	return 0;
}
