#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void primeFactors(ll n)
{
    vector<ll>spf(n+1,0);
    for (ll i = 2; i <=n; i++)
    {
        spf[i]=i;
    }
    for(ll i=2;i<n;i++)
    {
        if(spf[i]==i)
        {
            for(ll j=i*i;j<=n;j+=i)
            {
                if(spf[j]==j)
                {
                    spf[j]=i;
                }
            }
        }
    }
    while(n!=1)
    {
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
}
int main()
{
    ll n;
    cin>>n;
    primeFactors(n);
}