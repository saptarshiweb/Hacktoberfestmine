# https://leetcode.com/problems/coin-change-2/
# Python solution to leetcode problem - Coin Change 2
# Soultion Approach - DP (Unbounded Knapsack Type)

class Solution:
    def change(self, amount: int, coins: List[int]) -> int:
        
        # coin change problem: Maximum number of ways
        # It is a Unbounded knapsack problem
        # as there are infinite instance of each coin
        
        n=len(coins)
        
        dp=[[0 for j in range(amount+1)] for i in range(n+1)]
        
        for i in range(n+1):
            for j in range(amount+1):
                
                if j==0:
                    dp[i][j]=1
                    
                elif i==0:
                    dp[i][j]=0
                    
                elif coins[i-1]<=j:
                    
                    dp[i][j]= dp[i][j-coins[i-1]] + dp[i-1][j]
                    
                elif coins[i-1]>j:
                    
                    dp[i][j]=dp[i-1][j]
                    
                    
        return dp[n][amount]
