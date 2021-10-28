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
vector<vector<ll>> inputGraph(ll n, ll e)
{
    vector<vector<ll>> edges(n);
    for(ll i=0; i<e; i++)
    {
        int f, s;
        cin>>f>>s;
        edges[f].push_back(s);
        edges[s].push_back(f);
    }
    return edges;
}
void DFS(vector<vector<ll>> edges, ll n, ll sv, bool *visited)
{
    cout<<sv<<" ";
    visited[sv]=true;
    for(auto x: edges[sv])
    {
        if(visited[x]==false)
        {
            DFS(edges, n, x, visited);
        }
    }
}

int main()
{
    cout<<"Enter no of vertices and edges:";
    ll n, e;
    cin>>n>>e;
    vector<vector<ll>> edges=inputGraph(n, e);
    bool *visited=new bool[n];
    for(int i=0; i<n; i++)
    {
        visited[i]=false;
    }
    DFS(edges, n, 0, visited);
    delete [] visited;
    return 0;
}