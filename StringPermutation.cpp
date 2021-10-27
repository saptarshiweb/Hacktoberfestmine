#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void permute(int i, int j, string s, vector<string> &ans)
    {
        if(i==j)
        {
            ans.push_back(s);
            return ;
        }
        for(int k=i; k<=j; k++)
        {
            swap(s[i], s[k]);
            permute(i+1, j, s, ans);
            swap(s[i], s[k]);
        }
        return ;
    }
    vector<string> permutation(string s)
    {
        vector<string> ans;
        permute(0, s.length()-1, s, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}  // } Driver Code Ends