/*backtracking ==>> ek algorithm technique hai jo recursion ke thru har possible solution try karte hai aur wo solution 
    remove kar dete hain jo hmare constraints ko pass nhi kar paate hain */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isSafe(vector<vector<ll>> vec, ll x, ll y, ll n)
{
    if (x < n && y < n && vec[x][y] == 1)
        return true;

    return false;
}
bool ratInMaze(vector<vector<ll>> vec, ll x, ll y, ll n, vector<vector<ll>> &sol)
{
    if (x == n - 1 && y == n - 1)
    {
        sol[x][y] = 1;
        return true;
    }
    if (isSafe(vec, x, y, n))
    {
        sol[x][y] = 1;
        if (ratInMaze(vec, x + 1, y, n, sol))
            return true;

        if (ratInMaze(vec, x, y+1, n, sol))
            return true;

        sol[x][y] = 0;              //this is the back track step
        return false;
    }
    return false;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n;
    cin >> n;
    vector<vector<ll>> vec(n,vector<ll>(n, 0)), sol(n, vector<ll>(n, 0));
    for (ll i = 0; i < n; i++)
    {
       for (ll j = 0; j < n; j++)
            cin >> vec[i][j];
    
    }
    if (ratInMaze(vec, 0, 0, n, sol))
        cout << "YES\n";

    else
        cout << "NO\n";

    for (ll i = 0; i < n; i++)
    {
        for (auto x : sol[i])
            cout << x << " ";

        cout << endl;
    }
    return 0;
}