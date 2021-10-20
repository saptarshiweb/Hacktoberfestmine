# https://leetcode.com/problems/generate-parentheses/
# python solution to leetcode problem - Generate Parenthesis
# solution approach - Recursion

class Solution:
    
    def generateAll(self,open_count:int,close_count:int,output:str,finalList:List[str]):
        
        if open_count==0 and close_count==0:
            finalList.append(output)
            return
        
        if close_count>=open_count:
            if open_count>0:
                output1=output+"("
                self.generateAll(open_count-1,close_count,output1,finalList)
            
            if close_count>0:
                output2=output+")"
                self.generateAll(open_count,close_count-1,output2,finalList)
        
        return
                
    def generateParenthesis(self, n: int) -> List[str]:
        
        '''
        using recursion input-output method
        '''
        open_count=n-1
        close_count=n
        output="("
        finalList=[]
        
        self.generateAll(open_count,close_count,output,finalList)
        return finalList
