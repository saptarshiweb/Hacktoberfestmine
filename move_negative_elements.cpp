// move negative elements to beginning 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;              //using two pointer approach 
void input()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int main(int argc, char const *argv[])
{
    input();
    ll n;
    cin>>n;
    vector<ll>vec(n);
    for(ll i=0;i<n;i++)
    cin>>vec[i];

    ll low =0,high = n-1;
    while(low<high)
    {
        if(vec[low]<0)
        {
            low++;
            continue;
        }

        else
        {
            if(vec[high]>=0)
            high--;

            else
            {
                swap(vec[low],vec[high]);
                high--;
                low++;
            }
        }
    }
    for(auto x:vec)
    cout<<x<<" ";
    
    return 0;
}
// two pointer approach uses two variables first and last 