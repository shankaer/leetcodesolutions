class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        d = {}
        
        res = True 
        
        for num in nums :
            if num in d :
                res = False 
                break
                
                
            else :
                #print('not in ',num)
                d[num] = 1 
                 
        return not res 
        
