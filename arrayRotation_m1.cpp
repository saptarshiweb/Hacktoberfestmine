//Anticlockwise rotation
#include<bits/stdc++.h>   //using the reversal method
#define ll long long
#define lli long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define Vector vector<ll>
#define Pair pair<ll,ll>
#define Map map<ll,ll>
#define Deque deque<ll>dq
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define endl "\n"
#define Fill(a,n,array) for(ll i=a;i<n;i++) cin>>array[i]
#define num_length(n)  floor(log10(n) + 1)
#define asc_sort(vec) sort(vec.begin(),vec.end());
#define desc_sort(vec) sort(vec.begin(), vec.end(),greater<ll>())
#define MOD7 1000000007
#define MOD9 1000000009
using namespace std;
void input() {
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
    
    vector<ll>vec(n,0);
    Fill(0,n,vec);

    ll d;
    cin>>d;
    reverse(vec.begin(),vec.begin()+d);
    reverse(vec.begin()+d,vec.end());
    reverse(vec.begin(),vec.end());
    for(auto x:vec)
    cout<<x<<" ";
    return 0;
}
/* aur bhi method hai reverse karen ke ++

1. store ka lo usse d ek temporary array me aur oiginal arraye me shidt kara do 
   first tak . phr last me  temp array ko insert kara do original array me.
   Time O(n)
   Space O(d)

2. ya eke ek position se rotate karao 
    O(n*d) Time 
    Space O(1)


*/

/* for cyclic rotation 
1 .  rotate one by one , store in a variable , then shift thwe array and then insert.

2.  using the reversal algorithm

3. by using two pointers also , swap until i< j 
        i =0 and j=n-1;
        inncrease i i.e. i++
    
*/