//@ad__hack
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define mii map<int, int>
#define mod 1000000007
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define ps fixed<<setprecision(y)<<x
bool isSquare(int x){
int y=sqrt(x);
return y*y==x;
}
bool isPowerOfTwo(int n)
{
if(n==0)
{
return false;
}
return (ceil(log2(n)) == floor(log2(n)));
}
//-------------------------Code----------------------------
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
ll t;
cin>>t;
for(ll abc=0; abc<t; abc++)
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }
    ll i=0, j=n-1;
    while(i<j)
    {
        while(i<j && v[i]<0)
        {
            i++;
        }
        while(i<j && v[j]>0)
        {
            j--;
        }
        if(i<j)
        {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
    for(ll i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
return 0;
}