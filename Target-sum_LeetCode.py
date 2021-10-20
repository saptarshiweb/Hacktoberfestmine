# https://leetcode.com/problems/target-sum/
# python solution to leetcode problem - Targe Sum
# Solution Approach - DP

class Solution:
    
    def countOfSubsetSumWithGivenSum(self, nums: List[int], n, W, zero_count)->int:
        
        t=[[0 for j in range(W+1)] for i in range(n+1)]
        
        for i in range(n+1):
            for j in range(W+1):
                
                if j==0:
                    t[i][j]=1
                    
                elif i==0:
                    t[i][j]=0
                
                elif nums[i-1]==0:
                    t[i][j]=t[i-1][j]
                    
                elif nums[i-1]<=j:
                    t[i][j] = t[i-1][j-nums[i-1]] + t[i-1][j]
                    
                elif nums[i-1]>j:
                    t[i][j]=t[i-1][j]
                    
        return (2**zero_count)*t[n][W]            
        
    def findTargetSumWays(self, nums: List[int], target: int) -> int:
        
        # this problem is exactly same as
        # count the number of subsets with Given Difference
        
        sum_nums=0
        zero_count=0
        diff=target
        
        for ele in nums:
            sum_nums+=ele
            if ele==0:
                zero_count+=1
                
        if sum_nums<diff or sum_nums+diff<0 or (sum_nums+diff)%2!=0:
            return 0
        
        sum_subset1=(sum_nums+diff)//2
        return self.countOfSubsetSumWithGivenSum(nums,len(nums),sum_subset1,zero_count)
        
