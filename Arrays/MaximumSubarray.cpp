class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int curr , res ; 
        
        for ( int i = 0 ; i < nums.size() ; ++i ){
            
            if ( i == 0 ) {
                if (nums[i] < 0 ){
                    curr = 0 ; 
                    res = nums[i] ;
                }
                else {
                    curr = nums[i] ;
                    res = nums[i] ;
                }
            }
            else {
                if( curr + nums[i] < 0 ){
                    curr = 0 ;
                    res = max(res , nums[i]);
                }
                else {
                    curr = curr + nums[i] ;
                    res = max(res,curr) ;
                }
                
            }
        }
        
        return res ;
        
    }
};
