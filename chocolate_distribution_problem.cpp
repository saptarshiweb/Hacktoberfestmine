#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void input() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
int main(int argc, char const *argv[])
{
    input();
    ll n,m;
    cin>>n>>m;
    vector<ll>vec(n);
    for(ll i=0;i<n;i++)
    cin>>vec[i];

    sort(vec.begin(),vec.end());
    ll low = 0 , high=m-1 , mn =INT_MAX;
    while(high<n)
    {
        mn  = min(mn , vec[high] - vec[low]);
        low++;
        high++;
    }
    cout<<mn;
    return 0;
}
