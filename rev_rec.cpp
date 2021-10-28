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
string rev(string st)
{
    if(st.length()==0)
    {
        return "";
    }
    char c=st[0];
    string rs=rev(st.substr(1));
    return rs+c;
}
int main()
{
ll t;
cin>>t;
for(ll a=0; a<t; a++)
{
    string s;
    cin>>s;
    cout<<rev(s)<<endl;
}
return 0;
}