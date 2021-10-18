# https://leetcode.com/problems/shortest-common-supersequence/
# Python Solution to leetcode problem - shortest-common-supersequence
# Solution Approach - DP

class Solution:
    def shortestCommonSupersequence(self, str1: str, str2: str) -> str:
        
        # first finding Longest Common Subsequence
        
        m=len(str1)
        n=len(str2)
        
        dp = [[0 for j in range(n+1)] for i in range(m+1)]
        
        for i in range(m+1):
            for j in range(n+1):
                
                if i==0 or j==0:
                    dp[i][j]=0
                    
                elif str1[i-1]==str2[j-1]:
                    dp[i][j]=1+dp[i-1][j-1]
                    
                else:
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1])
        
        # now going back from bottom most right cell of dp matrix and 
        # taking letters once which were common ie part of LCS and which are not common
        # ie rest of the letters
        i=m
        j=n
        string=""
        
        while i>0 and j>0:
            
            if str1[i-1]==str2[j-1]:
                string+=str1[i-1]
                i-=1
                j-=1
            else:
                if dp[i][j-1]>dp[i-1][j]:
                    string+=str2[j-1]
                    j-=1
                else:
                    string+=str1[i-1]
                    i-=1
        
        while i>0:
            string+=str1[i-1]
            i-=1
            
        while j>0:
            string+=str2[j-1]
            j-=1
        

        lst=list(string)
        lst.reverse()
        return "".join(lst)
