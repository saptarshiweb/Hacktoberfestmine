// first and last occurence of a number 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void input() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
ll firstOccurence(ll arr[], ll n ,ll i ,ll k)
{
    if(i==n)
    return -1;

    if(arr[i]==k)
    return i;

    return firstOccurence(arr,n,i+1,k);
}
ll lastOccurence(ll arr[] ,ll n , ll i, ll k)
{
    if(i==n)
    return -1;

    ll restArray = lastOccurence(arr,n,i+1,k);
    if(restArray!=-1)
    return restArray;

    if(arr[i]==k)
    return i;

    return -1;
}
int main()
{
    input();
    ll n=7,k=2;
    //cin>>n>>k;
    ll arr[n]={4,2,1,3,2,2,6};
    //for(ll i=0;i<n;i++)
   // cin>>arr[i];

    cout<<"First Occurence "<<firstOccurence(arr,n,0,k);
    cout<<"\nlast Occurence "<<lastOccurence(arr,n,0,k); 
}