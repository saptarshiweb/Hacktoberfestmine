#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		int one = n/k;
		if(one>=m)
		{
			cout<<m<<endl;
		}
		else
		{
			int temp = one;
			int rest = (m-temp)/(k-1);
			if((rest*(k-1))<(m-temp))
			rest++;
			cout<<temp-rest<<endl;
		}
	}
	return 0;
}
