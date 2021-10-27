#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll friendsPairing(ll n)
{
    //if n =0 , mtlb koi hai hi nhi pair up hone ke liye
    //if n=1 , us bande ham single chod denge 
    //if n=2 , to ya to hm dono ko pair up kar de yas single chod de ...to 2 ways honge 
    if(n==0 || n==1 || n==2)
    return n;

    return friendsPairing(n-1) + friendsPairing(n-2)*(n-1);
    //we added here bcuz hmahe har possiblity chahiye use leave karne ki aur har possibility usse pair up karne ki 
    //1st call ==>agar ham nth  person ko leave kar denge to baakiyon ko pair up karne ke kitte ways  honge
    //2nd call ==> agar ham nth person ko pair up karte to uske pass (n-1) chances hain pair up hone ke liye aur baki bche (n-2) 
}
int main()
{
    ll n;
    cin>>n;
    cout<<friendsPairing(n);

    return 0;
}