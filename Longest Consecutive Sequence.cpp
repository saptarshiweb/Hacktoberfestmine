//https://leetcode.com/problems/longest-consecutive-sequence/
class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        unordered_set<int> S;
    int ans = 0,n=arr.size();
 
    for (int i = 0; i < n; i++)
        S.insert(arr[i]);
 
    for (int i = 0; i < n; i++)
    {
        if (S.find(arr[i] - 1) == S.end())
        {
            int j = arr[i];
            while (S.find(j) != S.end())
                j++;
 
            ans = max(ans, j - arr[i]);
        }
    }
    return ans;
    }
};