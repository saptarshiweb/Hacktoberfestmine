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
int main()
{
ll t;
cin>>t;
for(ll a=0; a<t; a++)
{
    ll n;
    cin>>n;
    ll ans=-1;
    if(n==1)
    {
        cout<<0<<endl;
        continue;
    }
    if(n==2)
    {
        cout<<1<<endl;
        continue;
    }
    if(n%2==0)
    {
        ans=2;
        cout<<ans<<endl;
    }
    else
    {
        ans=1;
        n--;
        if(n==2)
        {
            cout<<ans+1<<endl;
        }
        else
        {
            cout<<ans+2<<endl;
        }
    }

}
return 0;
}