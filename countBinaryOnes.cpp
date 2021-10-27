// using bit manipulation .... other  methods also there 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll countBinaryOnes(ll n)
{
    ll cnt=0;
    while(n)
    {
        n= n & (n-1);
        cnt++;
    }
    return cnt;
}
int main()
{
    ll n;
    cin>>n;
    cout<<countBinaryOnes(n);
}