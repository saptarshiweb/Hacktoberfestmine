#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0)
	{
	    int n;
	    int a=0,b=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='a')
	        a++;
	        if(s[i]=='b')
	        b++;
	        if(a==b)
	        {
	            cout<<"1"<<" "<<i+1<<endl;
	            break;
	        }
	    }
	    if(a==0 || b==0)
	    cout<<"-1"<<' '<<"-1"<<endl;
	    t--;
	}
	return 0;
}