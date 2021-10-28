#include "bits/stdc++.h" 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1e9 + 7 
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
#define INF 1000000000000000003 
typedef long long int ll; 
int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int T; 
    cin >> T; 
    while (T--) { 
     int n;
     cin>>n;
     int a[n];
     int b[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
         b[i]=a[i];
        
     }
     int k,l;
     sort(b,b+n);
     k=b[0];
     l=b[n-1];
     if(k==l)
     {
         cout<<"NO"<<endl;
     }
     else
     {  cout<<"YES"<<endl;
        for(int i=0;i<=n-1;i++)
        {
             for(int j=i+1;j<=n-1;j++)
             {
         if(a[i]!=a[j]&&a[j]!=-1)
         {
            cout<<i+1<<" "<<j+1<<endl; 
            a[j]=-1;
            
         }
             }
     }
     }
    
           } 
    return 0; 
}