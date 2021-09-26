

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long sum = 0 , n = nums.size() , Sumn = (n * (n+1)/2); 
        for ( int i = 0 ; i < nums.size() ; ++i )sum+= nums[i] ;
        return  Sumn - sum ; 
        
    }
};
