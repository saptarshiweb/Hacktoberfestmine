# https://leetcode.com/problems/coin-change/
# Python solution to leetcode problem - Coin Change
# Solution Approach - DP

import sys
class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        
        # unbounded knapsack problem
        
        n=len(coins)
        
        maximum=sys.maxsize-1
        
        dp=[[0 for j in range(amount+1)] for i in range(n+1)]
        
        
        for i in range(n+1):
            for j in range(amount+1):
                
                if i==0:
                    dp[i][j]=maximum
                    
                elif j==0:
                    dp[i][j]=0
                    
                elif coins[i-1]<=j:
                    
                    dp[i][j]= min (1+dp[i][j-coins[i-1]], dp[i-1][j])
                    
                elif coins[i-1]>j:
                    
                    dp[i][j] = dp[i-1][j]
                    
        if dp[n][amount]==maximum:
            return -1
        
        return dp[n][amount]
                    
                    
