#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>


using namespace std;
using namespace __gnu_pbds;

typedef long long int lli;
template<typename T> using indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


// finding # of bigger numbers to left of current number
// assumed the array contains no duplicates.
// If duplicates try to search for arr[i]+1 or some other appropriate alternative
lli inversionCount(vector<int>&arr){
    lli ans=0;
    int n= arr.size();
    indexed_set St;
    for (int i = 0; i < n; i++) {
    	//order of key is equivalent to lowerbound but returns the index.
        int cur = St.order_of_key(arr[i]);
        ans += St.size() - cur;
        St.insert(arr[i]);
    }
    return ans;
}
