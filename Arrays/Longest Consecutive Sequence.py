class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        
        d = {}
        res = 0  
        
        for num in nums :
            if num in d :
                
                d[num] = d[num] + 1
                
            else :
                d[num] = 1 
        
        for num in nums :
            # go left 
            interl = num 
            interr = num + 1 
            resTemp = 0 
            
            
            while interl in d :
                # go right 
                resTemp = resTemp + 1
                d.pop(interl)
                interl = interl - 1 
            
            while interr in d :
                resTemp = resTemp + 1
                d.pop(interr)
                interr = interr + 1 
                
            if resTemp > res :
                res = resTemp
                
        
        return res 
            
            
                
        
