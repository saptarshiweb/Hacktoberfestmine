#include <bits/stdc++.h>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define ll long long
#define lli long long int
#define Vector vector<ll>
#define Pair pair<ll, ll>
#define Map map<ll, ll>
#define Deque deque<ll> dq
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define endl "\n"
#define twoDvector vector<Vector>
#define Fill(a, n, array)      \
    for (ll i = a; i < n; i++) \
    cin >> array[i]
#define num_length(n) floor(log10(n) + 1)
#define asc_sort(vec) sort(vec.begin(), vec.end());
#define desc_sort(vec) sort(vec.begin(), vec.end(), greater<ll>())
#define MOD7 1000000007
#define MOD9 1000000009
using namespace std;
void input()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
void output_time()
{
#ifndef ONLINE_JUDGE
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
#endif
}
int main()
{
    fast;
    input();
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        Vector vec(n);
        Fill(0, n, vec);
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n - i + 1; j++)
            {
                if (vec[j] > vec[j + 1])
                {
                    swap(vec[j], vec[j + 1]);
                }
            }
        }

        for(auto x:vec)
        cout<<x<<" ";
    }
}